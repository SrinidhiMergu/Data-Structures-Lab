#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*f=NULL,*r=NULL,*cur;

void enqueue(){
    cur=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert\n");
    scanf("%d",&cur->data);
    if(f==NULL){
        f=cur;
        r=cur;
    }
    else{
        r->link=cur;
        cur->link=NULL;
        r=cur;
    }
}
void dequeue(){
    if(f==NULL)
        printf("QUEUE UNDERFLOW\n");
    else if(f==r){
        printf("Deleted element is %d\n",f->data);
        f=r=NULL;
    }
    else{
        cur=f;
        f=f->link;
        printf("Deleted data is %d\n",cur->data);
        free(cur);
    }
}
void display(){
    cur=f;
    if(f==NULL)
        printf("QUEUE IS EMPTY\n");
    else{
        while(cur!=NULL){
            printf("%d   ",cur->data);
            cur=cur->link;
        }
    }
}
int main(){
    int ch, x;
    while(1){
        printf("\n--------------------------------\n");
        printf("PROGRAM FOR QUEUE USING SINGLE LINKED LIST\n");
        printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}

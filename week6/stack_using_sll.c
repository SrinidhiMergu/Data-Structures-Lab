#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node*top=NULL, *cur, *next, *prev;

void push(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to push\n");
    scanf("%d",&cur->data);
    cur->link=top;
    top=cur;
}

void pop(){
    cur=top;
    top=cur->link;
    cur->link=NULL;
    printf("Deleted element is %d\n",cur->data);
    free(cur);
}

int isEmpty(){
	if(top==NULL)
	return 1;
	else
	return 0;
}

void display(){
    if(top==NULL)
        printf("List is empty\n");
    else{
        next=top;
        printf("Displaying the single linked list\n");
        while(next!=NULL){
            printf("%d->",next->data);
            next=next->link;
        }
        printf("NULL");
    }
}

int peek(){
    return(top->data);
}

int main(){
	int ch, x;
	while(1){
        printf("-----------------------\n");
		printf("\n1-push\n2-pop\n3-display\n4-peek\n5-exit\n");
        printf("-----------------------\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: push(x);
                    break;
			case 2: if(isEmpty())
						printf("STACK UNDERFLOW\n");
					else
						pop();
                    break;
			case 3: display();
					break;
			case 4: printf("top most element on the stack is %d\n",peek());
					break;
			case 5: exit(0);
		}
	}
	return 0;
}

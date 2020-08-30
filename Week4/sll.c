#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node*head=NULL, *tail=NULL, *cur, *next, *prev;

void create(){
    int n;
    printf("Enter size of single liinked list\n");
    scanf("%d",&n);
    printf("Enter current node data\n");
    for(int i=0; i<n; i++){
        cur = (struct node*) malloc(sizeof(struct node));
        scanf("%d",&(cur->data));
        cur->link=NULL;
        if(head==NULL)
            head=tail=cur;
        else{
            tail->link=cur;
            tail=cur;
        }
    }
}

void insert_at_begin(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter current node data\n");
    scanf("%d",&(cur->data));
    cur->link=head;
    head=cur;
}

void insert_at_end(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter current node data\n");
    scanf("%d",&(cur->data));
    cur->link=NULL;
    tail->link=cur;
    tail=cur;
}

void insert_at_pos(){
    int pos, c=1;
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted\n");
    scanf("%d",&(cur->data));
    printf("Enter position\n");
    scanf("%d",&pos);
    next=head;
    while(c<pos){
        prev=next;
        next=next->link;
        c++;
    }
    prev->link=cur;
    cur->link=next;
}

void insert_before_node(){
    int value;
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert before\n");
    scanf("%d",&cur->data);
    printf("Enter the node where data needs to be inserted before\n");
    scanf("%d",&value);
    next=head;
    while((next->data!=value) && (next!=NULL)){
        prev=next;
        next=next->link;
    }
    prev->link=cur;
    cur->link=next;
}

void insert_after_node(){
    int value;
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert after\n");
    scanf("%d",&cur->data);
    printf("Enter the node where data needs to be inserted after\n");
    scanf("%d",&value);
    next=head;
    while((next->data!=value) && (next!=NULL)){
        next=next->link;
    }
    cur->link=next->link;
    next->link=cur;
}

void delete_at_begin(){
    cur=head;
    head=cur->link;
    cur->link=NULL;
    printf("Deleted element is %d\n",cur->data);
    free(cur);
}

void delete_at_end(){
    cur=head;
    while(cur->link!=tail){
        cur=cur->link;
    }
    cur->link=NULL;
    next=tail;
    printf("Deleted element at %d",next->data);
    free(next);
    tail=cur;
}

void delete_at_pos(){
    int pos,c=1;
    printf("Enter position of deletion\n");
    scanf("%d",&pos);
    next=head;
    while(c<pos){
        prev=next;
        next=next->link;
        c++;
    }
    prev->link=next->link;
    printf("Deleted element at %d\n",next->data);
    next->link=NULL;
    free(next);
}

void delete_before_node(){
    int value;
    printf("Enter data to delete before\n");
    scanf("%d",&value);
    next=head;
    while(next->link->data!=value){
        prev=next;
        next=next->link;
    }
    prev->link=next->link;
    next->link=NULL;
    printf("Deleted element is %d\n",next->data);
    free(next);
}

void delete_after_node(){
    int value;
    printf("Enter data to delete after\n");
    scanf("%d",&value);
    next=head;
    while(next->data!=value){
        prev=next;
        next=next->link;
    }
    prev=next->link;
    next->link=next->link;
    printf("Deleted element is %d\n",prev->data);
    prev->link=NULL;
    free(prev);
}

void search_element(){
    int value,flag=0,c=1;
    printf("Enter value\n");
    scanf("%d",&value);
    next=head;
    while(next!=NULL){
        if(next->data==value){
            flag=1;
            printf("Element found at %d",c);
            break;
        }
        next=next->link;
        c++;
    }
    if(flag==0)
        printf("Element not found");
}

void sorting(){
	struct node *p1,*last=NULL;
	int c, t;
	do{
        p1=head;
        c=0;
        while(p1->link!=last){
			if(p1->data > p1->link->data){
				t=p1->data;
				p1->data=p1->link->data;
				p1->link->data=t;
				c=1;
			}
		p1=p1->link;
		}
		last=p1;
	}while(c);
}

void reverse_using_recursion(struct node* head){
    if(head!=NULL){
        reverse_using_recursion(head->link);
        printf("%d->",head->data);
    }
}

void reverse_using_arrays(){
    int a[100];
    int i=0;
    cur=head;
    while(cur!=NULL){
        a[i]=cur->data;
        cur=cur->link;
        i++;
    }
    i--;
    printf("NULL");
    while(i>=0){
        printf("->%d",a[i]);
        i--;
    }
}

void display(){
    if(head==NULL)
        printf('List is empty');
    else{
        next=head;
        printf("Displaying the single linked list\n");
        while(next!=NULL){
            printf("%d->",next->data);
            next=next->link;
        }
        printf("NULL");
    }
}

int main(){
    int ch;
    while(1){
        printf("\n\nProgram for SLL\n");
        printf("1-create\n2-insert at begin\n3-insert at position\n4-insert at end\n5-insert before node");
        printf("\n6-insert after node\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete before node");
        printf("\n11-delete after node\n12-display\n13-search\n14-sort\n15-display in reverse using recursion\n");
        printf("16-display in reverse using arrays\n17-Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: create();
                    break;
            case 2: insert_at_begin();
                    break;
            case 3: insert_at_pos();
                    break;
            case 4: insert_at_end();
                    break;
            case 5: insert_before_node();
                    break;
            case 6: insert_after_node();
                    break;
            case 7: delete_at_begin();
                    break;
            case 8: delete_at_end();
                    break;
            case 9: delete_at_pos();
                    break;
            case 10: delete_before_node();
                    break;
            case 11: delete_after_node();
                    break;
            case 12: display();
                    break;
            case 13: search_element();
                    break;
            case 14: sorting();
                    break;
            case 15: reverse_using_recursion(head);
                    break;
            case 16: reverse_using_arrays();
                    break;
            case 17: exit(0);
        }
    }
    return 0;
}

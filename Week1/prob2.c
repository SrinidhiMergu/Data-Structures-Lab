#include<stdio.h>
#include<stdlib.h>

struct node
{
	float data;
	struct node*prev;
	struct node*next;
};

int main()
{
	struct node*s;
	s=(struct node*)malloc(sizeof(struct node));
	s->data=100;
	s->prev=NULL;
	s->next=NULL;
	printf("Data=%f", s->data);
}
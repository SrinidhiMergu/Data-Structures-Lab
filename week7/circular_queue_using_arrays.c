//implementation of Circular queue using arrays
#include<stdio.h>
#include<stdlib.h>
#define maxsize 6
int f=-1,r=-1,cq[maxsize];
int isfull()
{
	if(f==((r+1)%maxsize))
		return 1;
	else
		return 0;
}
int isempty()
{
	if(f==-1)
		return 1;
	else
		return 0;
}
void enqueue(int x)
{
	if(f==-1)
		f=0;
    r=(r+1)%maxsize;
    cq[r]=x;

}
int dequeue()
{
	int x;
	x=cq[f];
	if(f==r)
		f=r=-1;
	else
		f=(f+1)%maxsize;
	return x;
}
void display()
{
	int i=f;
	if(f==-1)
		printf("CIRCULAR QUEUE IS EMPTY\n");
	else
	{
		while(i!=r)
		{
			printf("%d   ",cq[i]);
			i=(i+1)%maxsize;
		}
		printf("%d",cq[i]);
	}
}
int main()
{
	int ch,x;
	while(1)
	{
	    printf("\n--------------------------\n");
	    printf("PROGRAM FOR CIRCULAR QUEUE USING ARRAYS\n");
		printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");
		printf("--------------------------\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(isfull())
                        printf("CIRCULAR QUEUE OVERFLOW\n");
                    else
                    {
                        printf("Enter data to insert\n");
                        scanf("%d",&x);
                        enqueue(x);
                    }
                    break;
			case 2: if(isempty())
                        printf("CIRCULAR QUEUE UNDERFLOW\n");
                    else
                        printf("Deleted element is %d\n",dequeue());
                    break;
			case 3: display();
                    break;
			case 4: exit(0);
		}
	}
	return 0;
}

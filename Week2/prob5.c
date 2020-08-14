#include<stdio.h>

int linearSearch(int a[50], int n, int x){
	int pos=-1;
	for (int i=0; i<n; i++){
		if (a[i] == x)
		{
			pos = i;
			break;
		}
	}
	return pos;

}

int main(){
	int n, pos,x;
	scanf("%d %d", &n, &x);
	int a[50];
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	pos = linearSearch(a, n, x);
	if (pos==-1)
		printf("Element not found");
	else
		printf("Element found at position %d", pos+1);
	
	return 0;
}

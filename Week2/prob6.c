#include<stdio.h>
int linearSearch(int a[50], int n, int x){
	static int i; // i=0
	if (a[i] == x){
		return i;
	}
	else if(i<n){
		i++;
		linearSearch(a, n, x);
	}
	else
		return -1;
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

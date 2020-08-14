#include<stdio.h>
int binarySearch(int first, int last, int a[50], int x){
	int pos=-1, mid;
	while( first <= last){
		mid = (first + last)/2;
		if (a[mid] == x){
			pos = mid;
			break;
		}
		else if(a[mid] < x){
			first = mid+1;
		}
		else
			last = mid-1;
	}
	return pos;
}

int main(){
	int n, pos, x;
	scanf("%d %d", &n, &x);
	int a[50];
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	pos = binarySearch(0, n-1, a, x);
	if (pos==-1)
		printf("Element not found");
	else
		printf("Element found at position %d", pos+1);
	
	return 0;
}

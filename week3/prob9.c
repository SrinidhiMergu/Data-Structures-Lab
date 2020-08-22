#include<stdio.h>
void bubble_sort(int n, int a[n]){
	int t;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	bubble_sort(n, a);
	printf("Elements after sorting\n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

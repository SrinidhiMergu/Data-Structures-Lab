#include<stdio.h>
void selection_sort(int n, int a[n]){
	int t, min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]){
				t = a[j];
				a[j] = a[min];
				a[min] = t;
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
	selection_sort(n, a);
	printf("Elements after sorting\n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
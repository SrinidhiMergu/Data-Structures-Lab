#include<stdio.h>
void insertion_sort(int n, int a[n]){
	int t, index, j;
	for(int i=1; i<n; i++){
		index = a[i];
		j = i;
		while((j >0) && (a[j-1] > index)){			
				a[j] = a[j-1];
				j = j-1;
			
		}
		a[j] = index;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(n, a);
	printf("Elements after sorting\n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sx(int a[], int n){
	for(int i = 0; i < n; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		if(i != min_index){
			printf("%d %d\n", i + 1, min_index + 1);
		}
		swap(&a[i], &a[min_index]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sx(a, n);
	return 0;
}

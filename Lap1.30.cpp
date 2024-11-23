#include<stdio.h>
#include<math.h> 

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printfMatrix(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < b[i]){
			swap(&a[i], &b[i]);
			printf("[%d] [%d] ", a[i], b[i]);
		}
		else{ 
			printf("%d %d ", a[i], b[i]);
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	
	int a[n], b[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a[i], &b[i]);
	}
	
	printfMatrix(a, b, n);
	
	return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int last_place(int a[], int n, int x){
	for(int i = n - 1; i >= 0; i--){
		if(a[i] == x){
			return i + 1;
		}
	}
	return -1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x;
		scanf("%d%d", &n, &x);
		
	
		int* a = (int*)malloc(n * sizeof(int));
		if(a == NULL){
			fprintf(stderr, "Khong the cap phat bo nho\n");
			return 1;
		}
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		int result = last_place(a, n, x);
		printf("%d\n", result);
		
		
		free(a);
	}
	return 0;
}

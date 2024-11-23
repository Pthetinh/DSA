#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int first_place(int a[], int n, int x){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			++cnt;
		}
	}
	return cnt;
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
		int result = first_place(a, n, x);
		printf("%d\n", result);
		
		
		free(a);
	}
	return 0;
}

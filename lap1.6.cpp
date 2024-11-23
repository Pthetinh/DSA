#include<stdio.h>
#include<math.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(){
	int n;
	scanf("%d", &n);
	
	int a[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	if(n % 2 == 0){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n / 2; j++){
				swap(&a[i][j], &a[i][n/2 + j]);
			}			
		}
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n / 2; j++){
				swap(&a[i][j], &a[i][n/2 + j + 1]);
			}			
		}
	}
	
	if(n % 2 == 0){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n / 2; j++){
				swap(&a[j][i], &a[n/2 + j][i]);
			}			
		}
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n / 2; j++){
				if(i != n / 2){
					swap(&a[j][i], &a[n/2 + j + 1][i]);
				}
			}			
		}
	}	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

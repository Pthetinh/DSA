#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++){
		int min = 1e9, max = -1e9;
		int check = 0;
		for(int j = 0; j < n; j++){
			if((i < j && (i + j < n - 1) ) || (i > j && (i + j > n - 1))){
				min = fmin(a[i][j], min);
				max = fmax(a[i][j], max);
				check = 1;
			}
		}
		if(check){
			printf("%d: %d\n", i, min + max);
		}
	}
	
	return 0;
}

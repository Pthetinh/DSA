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
	
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int dem = 1;
	int x[n * n];
	int k = 0;
	
	while(dem <= n * n){
		for(int i = c1; i <= c2; i++){
			x[k++] = a[h1][i];
			++dem;
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			x[k++] = a[i][c2];
			++dem;
		}
		--c2;
		for(int i = c2; i >= c1 ; i--){
			x[k++] = a[h2][i];
			++dem;
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			x[k++] = a[i][c1];
			++dem;
		}
		++c1;
	}
	
	for(long long i = 0; i < (long long)n * n; i++){
		printf("%d ", x[i]);
		if((i + 1) % n == 0){
			printf("\n");
		}
	}
	
	return 0;
}

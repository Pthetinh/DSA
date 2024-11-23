#include<stdio.h>
#include<math.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 0; i < m; i++){
		if(i % 2 == 0){
			for(int j = 0; j < n; j++){
				printf("%d ", a[j][i]);
			}
		}
		else{
			for(int j = n - 1; j >= 0; j--){
				printf("%d ", a[j][i]);
			}
		}
	}
	return 0;
} 

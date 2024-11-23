#include<stdio.h>
#include<math.h> 

void printfSaddlePoints(int a[100][100], int n, int m){
	int i, j, k;
	int isSaddlePoint;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			
			isSaddlePoint = 1;
			// Kiem tra max hang ? 
			for(int k = 0; k < m; k++){
				if(a[i][k] > a[i][j]){
					isSaddlePoint = 0;
					break;
				}
			}
			
			// Kiem tra min cot ?
			
			for(int k = 0; k < n; k++){
				if(a[k][j] < a[i][j]){
					isSaddlePoint = 0;
					break;
				}
			}
			
			if(isSaddlePoint){
				printf("[%d] ", a[i][j]);
			}
			else{
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	
	int a[n][100];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printfSaddlePoints(a, n, m);
	
	return 0;
}

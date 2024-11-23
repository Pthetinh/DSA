#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int b[n], c[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &c[i]);
	}
	int i = 0, j = 0;
	while(i < n && j < m){
		if(b[i] <= c[j]){
			printf("b%d ", i + 1);
			++i;
		}
		else{
			printf("c%d ", j + 1);
			++j;
		}
	}
	while(i < n){
		printf("b%d ", i + 1);
		++i;
	}
	while(j < n){
		printf("c%d ", j + 1);
		++j;
	}
	return 0;
}

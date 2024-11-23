#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d%d", &n, &m);
        
        int *a = (int*)malloc(n * sizeof(int));
        int *b = (int*)malloc(m * sizeof(int));
        int *c = (int*)malloc((m + n) * sizeof(int));
        
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for(int j = 0; j < m; j++){
			scanf("%d", &b[j]);
		}
		
		for(int i = 0; i < n; i++){
			c[i] = a[i];
		}
		
		for(int j = 0; j < m; j++){
			c[j + n] = b[j];
		}
		
		qsort(c, m + n, sizeof(int), cmp);
		
		for(int k = 0; k < m + n; k++){
			printf("%d ", c[k]);
		}
		
		
		printf("\n");
		
		free(a);
		free(b);
		free(c);
	}
	
	return 0;
}

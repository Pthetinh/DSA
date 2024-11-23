#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		
		int *a = (int*)malloc(n * sizeof(int));
		
		int min = 1e9, max = - 1e9;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			min = fmin(a[i], min);
			max = fmax(a[i], max); 
		}

		int range = max - min + 1;
		int *b = (int*)calloc(range, sizeof(int)); 
		
		for(int i = 0; i < n; i++){
			b[a[i]- min]++;
		}
		
		int cnt = 0;
		 
		for(int i = 0; i < range; i++){
			if(b[i] == 0){
				++cnt; 
			}
		}
		
		printf("%d\n", cnt);
		
		free(a);
		free(b);
	}
	return 0;
} 

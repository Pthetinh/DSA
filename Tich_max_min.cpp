#include<stdio.h>
#include<math.h>

void selection_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min_index];
		a[min_index] = tmp;
	}
} 

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		selection_sort(a, n);
		selection_sort(b, m);
		long long tich = 1;
		tich = (long long)a[n  - 1] * b[0];
		printf("%lld\n", tich);
	}
	return 0;
}

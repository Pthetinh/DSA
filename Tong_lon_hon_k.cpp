#include<stdio.h>
#include<math.h>

int countPairs(int a[], int n, int k){
	int count = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > k - a[j]){
				++count;
			}
		}
	} 
	return count;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d%d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		} 
		int result = countPairs(a, n, k);
		printf("%d\n", result);
	}
	return 0;
} 

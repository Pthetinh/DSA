#include<stdio.h>
#include<math.h>

int linear_search(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l < r){
		int mid = (l + r) / 2;
		if(x == a[mid]){
			return 1;
		}
		else if(x < a[mid]){
			r = mid - 1;
		}
		else if(x > a[mid]){
			l = m + 1;
		}
	}
	return 0;
}
int main(){
	int n, x;
	scanf("%d%d", &n, &x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int result = linear_search(a, n, x);
	printf("%d", result);
	return 0;
}

#include<stdio.h>
#include<math.h>

void TC(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int l, r;
	
	for(int i = 0;  i < n - 1; i++){
		if(a[i] > a[i + 1]){
			l = i;
			break;
		}
	}
	
	for(int i = n - 1; i > 0; i--){
		if(a[i] < a[i - 1]){
			r = i;
			break;
		}
	}
	
	int min = 1e9, max = -1e9;
	
	for(int i = l; i <= r; i++){
		min = fmin(min, a[i]);
	}
	
	for(int i = l; i <= r; i++){
		max = fmax(max, a[i]);
	}
	
	for(int i = 0; i <= l; i++){
		if(a[i] > min){
			l = i;
			break;
		}
	}
	
	for(int i = n - 1; i >= r; i--){
		if(a[i] < max){
			r = i;
			break;
		}
	}
	
	printf("%d %d", l + 1, r + 1);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		TC();
		printf("\n");
	}
	return 0;
}

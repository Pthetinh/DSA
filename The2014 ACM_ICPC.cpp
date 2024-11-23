#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int cmp(const void *a, const void *b){
	int* x =(int*) a;
	int* y =(int*) b;
	return *y - *x;
}

void in(int a[]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < a[i]; j++){
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%d", &t);
	for(int k = 0; k < t; k++){
		int cnt[3] = {0};
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
		}
		in(cnt);
	}
	return 0;
}

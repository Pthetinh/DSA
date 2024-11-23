#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Can lam lai bai xepgach
int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *y - *x;
} 

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int tmp = a[i] - i;
		if(tmp >= 0){
			cnt += tmp;
		}
	}
	printf("%d", cnt);
	return 0;
}


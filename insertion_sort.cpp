#include<stdio.h>
#include<math.h>

void bubble_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int check = 0;
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j+ 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				check = 1;
			}
		}
		if(check){
		printf("Buoc %d:", i + 1);
		for(int k = 0; k < n; k++){
			printf("%d ", a[k]);
		}
		printf("\n");
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	bubble_sort(a, n);
	return 0;
}

#include<stdio.h>
#include<math.h>

int partition(int a[], int l, int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			++i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i];
	a[i] = a[r];
	a[r] = tmp;
	return i;
}

void quick_sort(int a[], int l, int r){
	if(l < r){
		int i = partition(a, l, r);
		quick_sort(a, l, i - 1);
		quick_sort(a, i + 1, r);	
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int i = -1, pivot = a[n - 1];
	for(int j = 0; j < n - 1; j++){
		if(a[j] <= pivot){
			++i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i];
	a[i] = a[n - 1];
	a[n - 1] = tmp;
	for(int j = 0; j < n; j++){
		if(j == i){
			printf("[%d] ", a[j]);
		}
		else
			printf("%d ", a[j]);
	}
	return 0;
}

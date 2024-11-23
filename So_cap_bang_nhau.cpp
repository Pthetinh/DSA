#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

typedef long long ll; 

int cnt[100001]; 

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++; 
	}
	long long ans = 0;
	for(int i = 0; i < 100001; i++){
		if(cnt[i] != 0){
			long long tmp = cnt[i];
			ans += (1ll * tmp * (tmp - 1)) / 2; 
		}
	} 
	printf("%lld\n", ans);
	return 0;
}

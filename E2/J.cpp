#include<stdio.h>
int main(){
	long long n,t,a,b;
	scanf("%lld%lld",&n,&t);
	long long sum[n],num[n],ans[t];
	sum[0] = 0;
	num[0] = 0;
	ans[0] = 0;
	for(long long i=1;i<=n;i++){
		scanf("%lld",&num[i]);
		sum[i] = sum[i-1]+num[i];
	}
	for(long long i=1;i<=t;i++){
		scanf("%lld%lld",&a,&b);
		ans[i] = sum[b]-sum[a-1];
	}
	for(long long i=1;i<=t;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}

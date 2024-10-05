#include<stdio.h>
#include<math.h>
double gs1(int n){
	double sum1 = 0.0;
	for(int i = 0;i<n;i++){
		sum1 += pow(-1,i)/(2*i+1.0);
	}
	return sum1*4;
}
double gs2(int n){
	double sum2 = 0.0;
	for(int i = 0;i<n;i++){
		sum2 += 1.0/pow((1+2*i),2);
	}
	return sqrt(sum2*8);
}
int main(){
	int i,T;
	scanf("%d\n",&T);
	int a[T];
	for(i=0;i<T;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<T;i++){
		double s1 = gs1(a[i]);
		double s2 = gs2(a[i]);
		double ans = fabs(s1-s2);
		printf("%.6f\n",ans);
	}
	return 0;
} 

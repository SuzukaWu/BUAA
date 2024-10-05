#include<stdio.h>
int main(){
	double n,a,b;
	scanf("%lf%lf",&n,&a);
	b = ((n-a)*100.0)/n;
	printf("Result: %.2f%% of the parts are defective.",b);
	return 0;
} 

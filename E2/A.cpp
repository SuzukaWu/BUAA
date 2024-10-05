#include<stdio.h>
int main(){
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	if(a>=c||b>=d){
		return 0;
	} 
	printf("%.2f",(d-b)*(c-a));
	return 0;
}

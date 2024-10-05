#include<stdio.h>
int main(){
	double a,b,c,d,f;
	double nmsl;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&f);
	nmsl = (a+b+c+d)*100/(a+b+c+d+f);
	printf("%.2f%%",nmsl);
	return 0;
} 

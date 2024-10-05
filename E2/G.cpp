#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double x[n],y[n];
	double sumx1=0.0,sumx2=0.0,sumy1=0.0,sumy2=0.0,sumxy=0.0;
	for(int i=0;i<n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
		sumx1 += x[i];
		sumy1 += y[i];
		sumx2 += x[i]*x[i];	
		sumxy += x[i]*y[i];
	}
	double b = ((n*sumxy)-(sumx1*sumy1))/((n*sumx2)-(sumx1*sumx1));
	double a = ((sumy1/n)-(b*(sumx1/n)));
	printf("%.3f %.3f",b,a);
	return 0;
}

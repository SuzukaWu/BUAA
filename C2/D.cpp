#include<stdio.h>
int main(){
	int n;
	double ave;
	double sum = 0.0;
    double a[2000];
    scanf("%d",&n);
	for(int i=0; i<n; i++){
    	scanf("%lf",&a[i]);
    	sum += a[i];
    }
    if(n>0){
    	ave = sum/n;
    	printf("%.3lf\n",ave);
    	for(int i=0; i<n; i++){
    		if(a[i]>ave){
    			printf("%.3lf ",a[i]);
			}
		}
	}
	return 0;
}

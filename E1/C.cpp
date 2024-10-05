#include<stdio.h>
int main(){
	int a,b,c,d,m,n;
	scanf("%d%d\n%d%d",&a,&b,&c,&d);
	m = a*b;
	n = c*d;
	if(m == 0)
	    return 0;
	if(n == 0)
	    return 0;
	if(m>n){
		printf("Larger!");
	}else if(m<n){
		printf("Smaller!");
	}else{
		printf("The same!");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,c,d,m,n;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	m = a-c;
	n = b-d;
	if(m<0)
	   m = -m;
	if(n<0)
	   n = -n;
	printf("%d",m+n);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,m;
	scanf("%d%d",&a,&b);
	m = a - b;
	while(m < 0)
	   m = -m;
	printf("%d",m);
	return 0;
}

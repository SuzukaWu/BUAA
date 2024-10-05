#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(b <= 0)
	{
		return 0;
	}
	printf("%d mod %d == %d",a,b,a%b);
	return 0;
}

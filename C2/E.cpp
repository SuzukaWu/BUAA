#include<stdio.h>
int main(){
	int t,n;
	scanf("%d%d",&t,&n);
	int a = t;
	int i = -1;
	while(i<n)
	{
		if(a%4==0 && a%100!=0 || a%400==0)
			i++;
			if(i == n)
				break;
			a++;
	}
	printf("%d",a);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,n,m;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	int i = n/m;
	if(n%m == 0){
		printf("%d",(a+b)*i);
	}else{
	 int t;
	 t = (a+b)*(i+1);
	 printf("%d",t);
	 return 0;
    }
}

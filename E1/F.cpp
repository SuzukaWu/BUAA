#include<stdio.h>
int main(){
	int i,t,a,b,yuan;
	int p = 0;
	scanf("%d%d",&t,&yuan);
	int sum = yuan;
	for(i=0;i<t;i++){
		scanf("%d%d",&a,&b);
		if(b==0){
			sum = sum + 0;
		}else if(b==1){
			sum = sum + a;
			p = sum/2;
			sum = p;
		}else{
			return 0;
		}
	}
    printf("%d %d",p,p-yuan);
	return 0;
}

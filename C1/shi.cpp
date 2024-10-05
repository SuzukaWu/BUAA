#include<stdio.h>
int main(){
	int i, t, n, m;
    scanf("%d", &t);
	for(i=0; i<t; i=i+1){
    	scanf("%d%d",&n,&m);
    	if(m == 0){
    	printf("QAQ\n");
	}else{
    	printf("%d\n",n/m);}
    }
    return 0;
}

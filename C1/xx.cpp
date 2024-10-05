#include<stdio.h>
int main(){
	int i,n,op,a,b;
    scanf("%d\n", &n);
	for(i=0; i<n; i=i+1){
        scanf("%d%d",&op,&a);
		if(op == 0){
			for(b=0; b<a; b=b+1) {
                printf("*");
            }
		}else if(op == 1){
			for(b=0; b<a; b=b+1) {
                printf("( )");
            }
		}else{
			return 0;
		}
		printf("\n");
    }
    return 0;
}

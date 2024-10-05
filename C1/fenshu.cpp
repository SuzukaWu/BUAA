#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a == 9){
		printf("bakabaka!"); 
	}else if(a >= 60){
		printf("Pass!");
	}else{
		printf("Fail...");
	}
	return 0;
}

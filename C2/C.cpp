#include<stdio.h>
int main(){
	int c;
	while((c = getchar()) != EOF){
		if((c >= 'a')&&(c <= 'z')){
			printf("%c",c-'a'+'A');
		}else if((c >='A')&&(c <= 'Z')){
			printf("%c",c-'A'+'a');
		}else{
			printf("%c",c);
		}
	}
	return 0;	
}

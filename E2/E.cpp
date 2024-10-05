#include<stdio.h>
int main(){
	int c;
	while((c = getchar())!=EOF){
		if(c>='a'&&c<='z'){
			printf("%c",'z'-(c-'a'));
		}else if(c>='0'&&c<='9'){
			printf("%c",'9'-(c-'0'));
		}else{
			printf("%c",c);
		}
	}
	return 0;
}

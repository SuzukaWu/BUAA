#include<stdio.h>
int main(){
	int c;
	while((c = getchar())!=EOF){
		if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
			printf("t");
		}else if(c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'){
			printf("T");
		}else{
			printf("%c",c);
		}
	}
	return 0;
}

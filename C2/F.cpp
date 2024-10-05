#include<stdio.h>
int main(){
	int a,b,c,d;
	while (scanf("%d:%d%-d:%d",&a,&b,&c,&d) != EOF){
		int total=(60*c+d)-(60*a+b);
		 int fee = 0;
        if (total > 0) {
            if (total <= 3 * 60) {
                fee = (total / 15) * 2.5;
            if (total % 15 > 0) 
			fee += 2.5;
            } else {
                fee = 3 * 60 * 2.5 / 15;
                total -= 3 * 60;
                fee += (total / 15) * 5;
            if (total % 15 > 0) 
			fee += 5;
            }
        }
        printf("%.0f\n", fee);
    }
    return 0;
}

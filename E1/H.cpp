#include<stdio.h>
int main()
{
    int x, N, y, z;
    scanf("%d%d", &N, &x);
    int i = 0;
    int m = 0;
	if(x == 0){
		while (i < N){
            m++;
			if(m % 10 == 0 || (( m >= 10) && ( m -( m % 10 )) % 100 == 0)){
                printf("%d ",m);
                i++;
            }
        }
	}else{
	    while (i < N){
            m++;
            if (m % x == 0 || m % 10 == x || (m / 10) % 10 == x || (m / 100) % 10 == x ){
                printf("%d ", m);
                i++;
            }
        }
    }
    return 0;
}


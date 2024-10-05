#include<stdio.h>
int main(){
    int sum = 0, n = 0;
    int score;
    scanf("%d", &score);
    while(score >= 0 && score <= 100 && score != -1){
        sum = sum + score;
        n = n + 1;
        scanf("%d", &score);
    }
    if(n > 0){
        printf("%d", sum / n);
    }
    return 0;
}

#include<stdio.h>
double bf(int X) {
    if (X >= 60) {
        return 4 - ((3.0 * (100 - X) * (100 - X)) / 1600);
    } else {
        return 0.0;
    }
}
int main(){
	int n,type,score;
	double sum_xf = 0.0,ji = 0.0;
	double S,jd;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%lf%d",&type,&S,&score);
		sum_xf += S;
		if(type == 0){
			if(score>=60){
			    jd = bf(score);
			    ji += jd*S;
			}else{
				ji += 0;
			}
		}else{
			if(score == 5){
				ji += 4*S;
			}else if(score == 4){
				ji += 3.5*S;
			}else if(score == 3){
				ji += 2.8*S;
			}else if(score == 2){
				ji += 1.7*S;
			}else{
				ji += 0;
			}
		}
	}
	printf("%.2f",ji/sum_xf);
	return 0;
}

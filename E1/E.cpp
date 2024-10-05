#include<stdio.h>
int main(){
	int d,w,b,v,x;
	scanf("%d%d\n%d",&d,&w,&b);
	if(d>b||d<=0||d>31||b<=0||d>31)
		return 0;
	if(w>7||w<1)
	    return 0;
	x = b-d;
	v = (x+w-1)%7+1;
	printf("%d %d",v,x);
	return 0;
} 

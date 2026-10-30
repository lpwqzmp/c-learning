#include<stdio.h>
int main(){
	int n,i,t=1,r=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t=t*i;
		r=r+t;	
	}
	printf("%d",r);
	return 0;
}

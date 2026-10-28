#include<stdio.h>
int main(){
	int n,i,t=1,r=0;
	scanf("%d",&n);
	if(n==0){printf("0!=1");}
	else{
	for(i=1;i<=n;i++){
		t=t*i;
		r=r+t;	
	}
	printf("%d",r);
	}return 0;
}

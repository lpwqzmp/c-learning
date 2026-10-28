#include<stdio.h>
int main(){
	int i,a,isprime=1,count=0;
	for(i=2;i<=100;i++){
		for(a=2;a<i;a++){
			if(i%a==0){
				isprime=0;
				break;}
				if(isprime==0){
					break;
				}
		}
		if(isprime==1){
			printf("%d ",i);
			count++;
			if(count%10==0){
			printf("\n");
			}
		}isprime=1;
	}return 0;
}

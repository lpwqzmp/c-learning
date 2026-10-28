#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%4!=0)		 printf("不是闰年\n");
	else if(a%100!=0)printf("闰年\n");
	else if(a%400==0)printf("闰年\n");
	else			 printf("不是闰年\n");
}

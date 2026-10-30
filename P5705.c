#include<stdio.h>
int main(){
    int a,b;
    scanf("%d.%d",&a,&b);
    printf("%d.%d%d%d",b,a%10,(a/10)%10,a/100);
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,c,d,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m = a*60+b;
    int n = c*60+d;
    x = n-m;
    printf("%d %d",x/60,x%60);
}

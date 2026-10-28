#include <stdio.h>
int add(int a,int b){
	int t=a+b;
	return t;
}
int isprime(int n){
	int i,prime=1;
	if(n<2) prime=0;
	for(i=2;i<n;i++){
		if(n%i==0) prime=0;
	}
	return prime;
}
int maxOf3(int a, int b, int c){
	int m=a;
	if(b>m) m=b;
	if(c>m) m=c;
	return m; 
}
int gcd(int a,int b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}return a;
}
int lcm (int a,int b){
	return a/gcd(a,b)*b;
}
int main(){
    printf("%d\n", add(3, 4));       // 7
    printf("%d\n", isprime(7));     // 1
    printf("%d\n", isprime(1));     // 0  ¡û ±ß½ç
    printf("%d\n", maxOf3(5, 5, 3)); // 5  ¡û ÏàµÈ
    printf("%d\n", gcd(12, 18));     // 6
    printf("%d\n", lcm(4, 6));       // 12
    return 0;
}

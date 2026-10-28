#include <stdio.h>
int add(int a,int b){
	int t=a+b;
	return t;
}
int isprime(int n){
	int i,isprime=1;
	for(i=2;i<n;i++){
		if(n%i==0) isprime=0;
	}
	if(isprime) return 1;
	else return 0;
}
int maxOf3(int a, int b, int c){
	if(a>b&&a>c) return a;
	if(b>a&&b>c) return b;
	if(c>a&&c>b) return c;
}
int gcd(int a,int b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}return a;
}

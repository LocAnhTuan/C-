#include<stdio.h>

struct phanSo{
	long long tu, mau;
};
long long ucln(long long a, long long b){
	if(b == 0 || a == 0) return a+b;
	while(a!=b){
		if(a>b){
			a = a - b;
		}
		else 
		    b = b - a;
	}
	return a;
}
int main(){
	phanSo ps;
	scanf("%lld%lld",&ps.tu,&ps.mau);
	long long ucmax = ucln(ps.tu,ps.mau);
	ps.tu = ps.tu/ucmax;
	ps.mau = ps.mau/ucmax;
	
	printf("%lld/%lld",ps.tu,ps.mau);
	return 0;
}

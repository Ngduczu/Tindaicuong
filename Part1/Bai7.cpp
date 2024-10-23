#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,x;
	printf("nhap 3 so thuc a, b, c: ");
	scanf ("%lf  %lf  %lf", &a, &b ,&c);
	x=(pow(a,5)-b)/c;
	printf("%.2lf",x);
	return 0;
}

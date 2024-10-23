#include <stdio.h>
#include <math.h>

int main(){
	float a,b;
	printf("nhap 2 so thuc a, b : ");
	scanf ("%lf  %lf", &a, &b);
	float c;
	c= pow(a,3)-sqrt(b+1);
	printf("%.2lf",c);
	return 0;
}

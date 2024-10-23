#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c, X,Y, e= M_E;
	double Z;
	printf("nhap 3 so thuc a, b, c: ");
	scanf ("%f  %f  %f", &a, &b ,&c);
	X=pow((pow(a,3)+b),5)-sqrt(abs(c));
	Y=pow(e,(2*a+b))-cbrt(pow(c,2)+1);
	Z=pow((X+Y),5)-pow(X,1/5);
	printf("a, %.3f\n",X);
	printf("b, %.3f\n",Y);
	printf("c, %.3lf\n",Z);
	return 0;
}

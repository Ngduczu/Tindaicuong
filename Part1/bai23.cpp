#include <stdio.h>
#include <math.h>

int main(){
	float x,S=2025;
	unsigned int n;
	printf("nhap x = ");
	scanf("%f",&x);
	printf("nhap n = ");
	scanf("%u",&n);
	for (int i=0;i<=n;i++){
		S+=pow(x,i);
	}
	printf("%.f",S);
return 0;
}

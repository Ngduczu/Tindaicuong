#include <stdio.h>
#include <math.h>

int main(){
	unsigned int n;
	float x,s,mau=0,tu=1;
	printf("nhap n: ");
	scanf("%u",&n);
	printf("nhap x: ");
	scanf("%f",&x);
	for (int i=1;i<=n;i++){
		mau+=i;
		tu+=(i*pow(x,i));
	}
	s=tu/mau;
	printf("%.2f",s);
}


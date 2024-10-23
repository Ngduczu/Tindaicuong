#include <stdio.h>

int main(){
	float a,b,c ,max;
	printf( "nhap so a: ");scanf("%f",&a);
	printf("\nnhap so b: ");scanf("%f",&b);
	printf("\nnhap so c: ");scanf("%f",&c);
	max=a;
	if (max<b) {
		max=b;
	}
	if (max<c) {
		max=c;
	}
	printf("so lon nhat la: %.3f",max);
	return 0;
}

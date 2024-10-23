#include <stdio.h>
#include <math.h>

int main(){
	float x,s,tu=0,mau=0;
	int n;
	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap n: ");
	scanf("%d",&n);
	float a[n];
	printf("nhap day so: \n");
	for (int i=1;i<=n;i++){
		scanf("%f",&a[i]);
		mau+=a[i];
		tu+=pow(x,i);
	}
	s=sqrt(10+(tu/mau));
	printf("%f",s);
}

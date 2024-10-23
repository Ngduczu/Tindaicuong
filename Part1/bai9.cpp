#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c, delta;
	printf("phuong trinh co dang tong quat ax^2+ bx+ c=0\n");
	printf("nhap he so a,b,c\n");
	scanf("%f %f %f",&a,&b,&c);
	
	delta=pow(b,2)-4*a*c;
	if (delta < 0){
		printf("phuong trinh vo nghiem");
	}
	if (delta==0){
		printf("phuong trinh co nghiem kep x1=x2= %.3f", -b/(2*a) );
	}
	if (delta>0){
		printf("phuong trinh co 2 nghiem:\n");
		printf("x1 = %.2f\n",(-b+sqrt(delta))/(2*a));
		printf("x2 = %.2f\n",(-b-sqrt(delta))/(2*a));
	}
return 0;
}

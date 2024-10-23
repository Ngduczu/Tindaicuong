#include <stdio.h>

int main(){
	int n,vtmax,vtmin;
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	float a[n];
	for (int i=1;i<=n;i++){
		printf("nhap a[%d] = ",i);
		scanf("%f",&a[i]);
	}
	float min=a[1],max=a[1];
	for (int i=1;i<=n;i++){
		if (a[i]<min){
			min=a[i];
			vtmin=i;
		}
		if (a[i]>max){
			max=a[i];
			vtmax=i;
		}	
	}
	printf ("max = %.2f . vi tri max la %d\n",max,vtmax);
	printf ("min = %.2f . vi tri min la %d\n",min,vtmin);
return 0;
}

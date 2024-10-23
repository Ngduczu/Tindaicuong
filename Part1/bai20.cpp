#include <stdio.h>

int main(){
	//nhap day
	int n;
	printf("nhap so phan tu cua day: ");
	scanf ("%d",&n);
	float a[n],trunggian;
	for (int i=1;i<=n;i++){
		printf("a[%d] = ",i);
		scanf ("%f",&a[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j]){
				trunggian=a[i];
				a[i]=a[j];
				a[j]=trunggian;
			}
		}
	}
	for (int i=1;i<=n;i++){
		printf("%.f ",a[i]);
	}
return 0;
}

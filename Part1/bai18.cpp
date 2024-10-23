#include <stdio.h>

int main(){
	
	int n,dem=0;
	
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	
	float a[n] , M;
	
	for (int i=1; i<=n ;i++){
		printf("a[%d] = ",i);
		scanf("%f",&a[i]);
	}
	
	printf("nhap m = ");
	scanf("%f",&M);
	
	for (int i=1;i<=n;i++){
		if(a[i]>M) {
		dem++;
		}
	}
	printf("so %d",dem);
}


#include <stdio.h>

int main(){
	unsigned int n;
	printf("nhap so phan tu cua day: ");
	scanf("%u",&n);
	int a[n];
	for (int i=1; i<=n;++i){
		printf("\nnhap phan tu a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("\n so chan la: ");
	for (int i=1;i<=n;i++){
		if (a[i]%2==0){
			printf ("%d ", a[i]);
		}
	}
	printf("\n so le la: ");
	for (int i=1;i<=n;i++){
		if (a[i]%2==1){
			printf("%d ", a[i]);
		}
	}
}

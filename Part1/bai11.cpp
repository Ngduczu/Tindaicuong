#include <stdio.h>

int main(){
	unsigned long long giaithua=1;
	unsigned int n;
	printf("nhap so nguyen n: ");
	scanf("%u",&n);
	if (n<0){
		printf("\nkhong co giai thua");
	}
	if (n==0 || n==1){
		printf("\ngiai thua cua %u la %llu",n,giaithua);
	}
	if (n>=2){
		for (int i=1;i<=n;++i){
			giaithua=giaithua*i;
		}
		printf("\ngiai thua cua %u la %llu",n,giaithua);
	}
	return 0;
}


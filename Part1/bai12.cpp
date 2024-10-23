#include <stdio.h>

unsigned long long giaithua(int num){
	if (num==0||num==1) return 1;
	unsigned long long kq=1; 
	for (int i=1;i<=num;++i){
		kq=kq*i;
	}
	return kq;
}
int main(){
	unsigned long long tong=0;
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
		tong+=giaithua(i);
	}
	printf("tong giai thua cua n la: %llu",tong);
}

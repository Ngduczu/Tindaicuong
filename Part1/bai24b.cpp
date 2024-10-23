#include <stdio.h>
int giaithua(int num){
	int ketqua=1;
	if (num==0 || num==1) return 1;
	if (num>=2){
		for (int i=1;i<=num;i++){
		ketqua*=i;
		}
	}
	return ketqua;
}
int main(){
	float S=0;
	unsigned int n;
	printf("nhap n = ");
	scanf("%u",&n);
	for (int i=0;i<=n;i++){
		S+=((2.0*i+1.0)/giaithua(i+1));
	}
	printf("%.2f",S);
return 0;
}

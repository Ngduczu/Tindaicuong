#include <stdio.h>4

int main(){
	int n;
	back: printf("nhap so phan tu cua day: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++){
		printf("a[%d] = ",i);
		scanf ("%d",&a[i]);
	}
	int max=a[4];
	if (a[4]%4!=0){
		goto back;
	}
	for (int i=1; i<=n; i++){
		if (a[i] % 4 ==0 && a[i]>max){
			max=a[i];
		}
	}
	return 0;
}

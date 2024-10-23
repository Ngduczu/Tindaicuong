#include <stdio.h>

int main(){
	int a;
	printf(" nhap 1 so nguyen bat ki: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("%d la mot so chan.....",a);
	}
	else {
		printf("%d la mot so le....",a);
	}
	return 0;
}

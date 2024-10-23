#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float a[n+1];
	for (int i=1;i<=n;i++){
		scanf("%f",&a[i]);
	}
	for (int i=1;i<=n;i++){
		if(a[i]>0){
			printf("%.f ",a[i]);
		}
	}
	printf("\n");
	for (int i=1;i<=n;i++){
		if(a[i]<0){
			printf("%.f ",a[i]);
		}
	}
	printf("\n");
	float M;
	int dem=0;
	scanf("%f",&M);
	for (int i=1;i<=n;i++){
		if(a[i]>M){
			dem++;
			printf("%.f ",a[i]);
		}
	}
	printf("\n%d",dem);

}

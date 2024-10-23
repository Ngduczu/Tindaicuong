#include <stdio.h>
#include <math.h>

float khoangcach(float a,float b,float c,float d){
	float ketqua;
	ketqua=sqrt(pow((a-c),2)+pow((b-d),2));
	return ketqua;
}
int main(){
	int n;
	float quangduong=0;
	scanf("%d",&n);
	float x[n+1],y[n+1];
	for (int i=1;i<=n;i++){
		printf("x%d = ",i);
		scanf("%f",&x[i]);
		printf("y%d = ",i);
		scanf("%f",&y[i]);
		printf("D%d (%.f,%.f)\n",i,x[i],y[i]);
	}
	for (int i=1;i<=n-1;i++){
		quangduong+=khoangcach(x[i],y[i],x[i+1],y[i+1]);
	}
	printf("%.2f",quangduong);
}

#include <stdio.h>
#include <math.h>

float dodai(float t1,float v1,float t2,float v2){
    float ketqua;
        ketqua=sqrt(pow((t1-t2),2)+pow((v1-v2),2));
    return ketqua;
}
int main(){
    int n;
    scanf("%d",&n);
    float x[n+1],y[n+1];
    for (int i=1;i<=n;i++){
        //nhap toa do
        printf("x%d=",i);
        scanf("%f",&x[i]);
        printf("y%d=",i);
        scanf("%f",&y[i]);
    }
    //cau a
    printf("Toa do cac diem la\n");
    for (int i=1;i<=n;i++){
        printf("(%.f,%.f)  ",x[i],y[i]);
    }
    //cau b
    printf("\nCac diem nam trong goc phan tu thu 2 la:\n");
    int dem1=0;
    for(int i=1;i<=n;i++){
        
        if (x[i]<0&&y[i]>0){ 
            dem1++;
            printf("(%.f,%.f)  ",x[i],y[i]);
        }
    }
    //cau c
    printf("\nco %d diem nam trong goc phan tu thu 2: ",dem1);
    int dem2=0;
   for (int i=1;i<=n;i++){
    if(x[i]==y[i]){
        dem2++;
    }
    }
    printf("\nco %d diem nam tren duong phan giac cua goc phan giac\n ",dem2);
    //cau d
    float a,b;
    int dem3=0;
    printf("nhap a,b:");
    scanf("%f %f",&a,&b);
    for (int i=1;i<=n;i++){
        if (a*x[i]==y[i]){
            dem3++;
        }
    }
    printf("\nco %d diem thuoc y=%.fx+%.f",dem3,a,b);
    //cau e
    float ddmax=0;
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
		            if (i!=j&&ddmax<dodai(x[i],y[i],x[j],y[j])){
                ddmax=dodai(x[i],y[i],x[j],y[j]);
            }
        }
    }
    printf("\n%.f",ddmax);
    //
}

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf ("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    float a[n],tich=1,tbn,dem=0;
    for (int i=1;i<=n;++i){
        printf("a[%d]= ",i);
        scanf("%f",&a[i]);
        if (a[i]>0){
            tich*=a[i];
            dem++;
        }
        printf("\n");
    }
    tbn=pow(tich,1/dem);
    printf("%.2f ",tich);
    printf("\n%.2f",tbn);
    return 0;
}

#include <stdio.h>

int main(){
    unsigned int n, dem=0;
    printf("nhap n: ");
    scanf("%u",&n);
    float a[n],tong=0;
    for (int i=1;i<=n;i++){
        printf("nhap phan tu a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    for (int i=1;i<=n;i++){
            if (a[i]<0){ 
                tong+=a[i];
                dem++;
            }
    }
    printf("tong = %.2f\n",tong);
    printf("tbc = %.2f",tong/dem);
return 0;
}
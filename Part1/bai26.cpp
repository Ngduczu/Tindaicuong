#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float x, e=M_E;
    printf("nhap x: ");
    scanf("%f",&x);
    printf("nhap n: ");
    scanf("%d",&n);
    float s=pow(e,x);
    for (int i=1;i<=n;i++){
        s+=(x+i)/(i+1);
    }
    printf("%f",s);
}

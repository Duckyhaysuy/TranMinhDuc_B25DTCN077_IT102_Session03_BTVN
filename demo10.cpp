#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b;
    printf("nhap so nguyen a:");
    scanf("%d",&a);
    printf("nhap so nguyen b:");
    scanf("%d",&b);
    
    float S = (sqrt(a+sqrt(b+1)))+(sqrt(b+sqrt(pow(a,2)+pow(b,2))));
    printf("gia tri bieu thuc la: %.2f", S);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
    float bankinh;
    printf("Nhap ban kinh:");
    scanf("%f",&bankinh);
    float per = bankinh* 2 * M_PI;
    float area = pow(bankinh,2) * M_PI;
    printf("Chu vi hinh tron: %f\n", per);
    printf("Dien tich hinh tron: %f", area);
   return 0;
}

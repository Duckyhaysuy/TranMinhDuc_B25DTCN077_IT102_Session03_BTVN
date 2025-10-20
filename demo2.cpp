#include <stdio.h>
int main(){
    float celcius;
    printf("Nhap nhiet do C;");
    scanf("%f",&celcius);
    float result = celcius * 9/5 +32;
    printf("Do Fahranheit la: %.2f",result);
   return 0;
}

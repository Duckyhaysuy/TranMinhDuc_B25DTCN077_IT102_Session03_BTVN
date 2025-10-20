#include <stdio.h>
#include <math.h>
int main(){
	
    float toan, van, anh;
    printf("Nhap diem toan:");
    scanf("%f",&toan);
    printf("Nhap diem van:");
    scanf("%f", &van);
    printf("Nhap diem anh:");
    scanf("%f", &anh);
    
    float sum = toan+van+anh;
    float aver = sum/3;
    printf("Diem tong: %.2f\n", sum);
    printf("Diem trung binh: %.2f", aver);

   return 0;
}

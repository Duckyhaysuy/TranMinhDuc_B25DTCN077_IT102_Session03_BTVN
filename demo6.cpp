#include <stdio.h>
int main(){
	float a,h;
	printf("nhap chieu dai day: ");
	scanf("%f",&a);
	printf("nhap chieu cao: ");
	scanf("%f",&h);
	float result = (a*h)/2;
	printf("Dien tich: %.2f",result);

	return 0;
}

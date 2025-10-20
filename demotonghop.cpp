#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	float giatri = (sqrt(pow(a,2)+pow(b,2))/(a+b))+((sqrt(a)+sqrt(b)))/(a*b);
	printf("gia tri bieu thuc la: %.2f",giatri);
	
	

	return 0;
}

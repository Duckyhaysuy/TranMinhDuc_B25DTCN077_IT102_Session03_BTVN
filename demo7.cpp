#include <stdio.h>
int main(){
	int number;
	printf("nhap so nguyen 4 chu so: ");
	scanf("%d",&number);
	
	int d1 = number%10;
	int d2 = (number/10)%10;
	int d3 = (number/100)%10;
	int d4 = number/1000;
    int sum = d1+d2+d3+d4;
    printf("tong: %d", sum);
	
	

	return 0;
}

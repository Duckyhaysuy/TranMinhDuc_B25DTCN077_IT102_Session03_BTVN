#include <stdio.h>
int main(){
	int number;
	printf("nhap so nguyen 4 chu so: ");
	scanf("%d",&number);
	
	int d1 = number%10;
	int d2 = (number/10)%10;
	int d3 = (number/100)%10;
	int d4 = number/1000;
	int dayso = d1*1000 + d2*100 + d3*10 +d4;
    printf("day so dao nguoc: %d\n", dayso);
	
	

	return 0;
}

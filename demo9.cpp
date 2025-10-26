#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    float a = (1.0 / ((n - 1) * n)) + (1.0 / (n * (n + 1))) + (1.0 / ((n + 1) * (n + 2)));
    printf("Gia tri bieu thuc: %f", a);

    return 0;
}


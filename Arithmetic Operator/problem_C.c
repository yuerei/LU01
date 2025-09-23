#include <stdio.h>
#include <math.h>

int main() {
    double x, b;
    scanf("%lf %lf", &x, &b);
    printf("%.2f\n", x * pow(1 + b/100,3));
    return 0;
}
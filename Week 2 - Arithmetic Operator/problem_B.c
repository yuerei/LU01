#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    printf("%.2lf%%\n", (double) (a-b) / a * 100);
    return 0;
}
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    float damage = 0.2 * a + 0.3 * b + 0.5 * c;
    printf("%.2f\n", damage);
    return 0;
}
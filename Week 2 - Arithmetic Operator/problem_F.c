#include <stdio.h>

int main() {
    unsigned short a,b,c,d;
    for (int i = 0; i < 3; i++) {
        scanf("%hu %hu %hu %hu", &a, &b, &c, &d);
        printf("%.2f\n", (float) 2 * a + 2 * b + 2 * c + d);
    }
    return 0;
}
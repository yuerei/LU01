#include <stdio.h>
#include <math.h>

int main() {
    long int a, b;
    for (int i = 0; i < 3; i++) {
        scanf("%ld + %ld =", &a, &b);
        printf("%ld\n", a + b);
    }
    return 0;
}
#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u", &a);
    unsigned long long damage = 100ULL * a + 50ULL * ((unsigned long long)(a-1) * a / 2);
    printf("%llu\n", damage);
    return 0;
}
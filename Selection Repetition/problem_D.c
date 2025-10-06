#include <stdio.h>

int main() {
    int a, b, c;
    unsigned short T;
    scanf("%hu", &T);
    for (unsigned short i = 1; i <= T; i++) {
        scanf("%d %d %d", &a, &b, &c);

        int price = (a / 100) * b;

        printf("Case #%hu: %d\n", i, price < c ? price : c);
    }
    return 0;
}
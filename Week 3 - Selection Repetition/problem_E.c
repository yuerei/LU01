#include <stdio.h>

int main() {
    unsigned short T;
    unsigned short a, b, _tmp, drinks;

    scanf("%hu", &T);
    for (unsigned short i = 1; i <= T; i++) {
        scanf("%hu %hu", &a, &b);
        _tmp = 0;
        drinks = 0;

        while (a > 0) {
            a--;
            drinks++;
            _tmp++;
            while (_tmp >= b) {
                _tmp -= b;
                a++;
            }
        }

        printf("Case #%hu: %hu\n", i, drinks);
    }
    return 0;
}
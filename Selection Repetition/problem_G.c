#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int N, X;
    scanf("%hu", &T);
    for (unsigned short t = 1; t <= T; t++) {
        scanf("%d %d", &N, &X);

        unsigned int front = X / 2;
        unsigned int back = (N - X + (X % 2)) / 2;

        printf("Case #%hu: %d\n", t, front <= back ? front : back);
    }
    return 0;
}
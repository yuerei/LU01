#include <stdio.h>

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned short T, N;

    scanf("%hu", &T);
    for (unsigned short i = 1; i <= T; i++) {
        int gcd = 0;

        scanf("%hu", &N);
        for (int i = 0; i < N; i++) {
            int num;
            scanf(" %d", &num);
            if (i == 0) gcd = num;
            else gcd = GCD(gcd, num);
        }
        printf("Case #%hu: %d\n", i, gcd);
    }
    return 0;
}
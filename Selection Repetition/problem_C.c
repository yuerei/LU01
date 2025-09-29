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
        unsigned short gcd = 0;

        scanf("%hu", &N);
        for (int i = 0; i < N; i++) {
            long long int num;
            scanf(" %lld", &num);

            if (i == 0) gcd = num;
            else gcd = GCD(gcd, num);
        }

        printf("Case #%hu: %hu\n", i, gcd);
    }
    return 0;
}
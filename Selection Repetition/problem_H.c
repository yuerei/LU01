#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned short T, N;
    
    scanf("%hu", &T);
    for (int t = 0; t < T; t++) {
        scanf("%hu", &N);

        int min = 2147483646;
        int before;
        for (int n = 0; n < N; n++) {
            int x;
            scanf("%d", &x);

            if (n > 0) {
                int diff = abs(x - before);
                if (diff < min) min = diff;
            }
            before = x;
        }

        printf("Case #%d: %d\n", t + 1, min);
    }
    return 0;
}
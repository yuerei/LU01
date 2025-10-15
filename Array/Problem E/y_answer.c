#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        int n; scanf("%d", &n);
        int numbers[n];

        for (int j = 0; j < n; j++) {
            /* pass the address of numbers[j] to scanf */
            scanf("%d", &numbers[j]);
        }

        int flag = 0; // bool
        int total = 0;
        for (int x = 0; x < n; x++) {
            flag = 0;
            for (int y = 0; y < n; y++) {
                if (y != x) {
                    for (int z = y+1; z < n; z++) {
                        if (z != x && z != y) {
                            if (numbers[y] + numbers[z] == numbers[x]) {
                                flag = 1;
                                break;
                            }
                        }
                    }
                    if (flag == 1) break;
                }
            }
            if (flag == 1) total++;
        }

        printf("Case #%d: %d\n", i+1, total);
    }
    return 0;
}
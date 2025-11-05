#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        char str[1001]; int M;
        scanf("%s %d", str, &M);

        for (int m = 0; m < M; m++) {
            char a, b; scanf(" %c %c", &a, &b);
            for (int j = 0; str[j] != '\0'; j++) {
                if (str[j] == a) str[j] = b;
            }
        }

        printf("Case #%d: %s\n", i+1, str);
    }
    return 0;
}
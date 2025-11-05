#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        int numOfSwap; char code[1001]; scanf("%d %1000s", &numOfSwap, code); getchar();

        for (int l = 0; l < numOfSwap; l++) {
            int from, to;
            scanf("%d %d", &from, &to); getchar();
            while (from < to) {
                char temp = code[from - 1];
                code[from - 1] = code[to - 1];
                code[to - 1] = temp;
                from++; to--;
            }
        }

        printf("Case #%d: %s\n", i+1, code);
    }
    return 0;
}
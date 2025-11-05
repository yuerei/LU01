#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        int len; scanf("%d", &len); getchar();
        char str[101]; scanf("%100[^\n]", str); getchar();

        int currI = 0;
        char out[101];
        int outI = 0;
        while (str[currI] != '\0') {
            char ch = (char) str[currI];
            if (ch >= 'a' && ch <= 'z') {
                out[outI++] = ch;
            }
            currI++;
        }
        out[outI] = '\0';

        printf("Case #%d: %s\n", i+1, out);
    }
    return 0;
}
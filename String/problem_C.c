#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        char string[1001]; scanf("%s", string); getchar();

        int distance[1001];
        int index = 0; while (string[index] != '\0') {
            char c = string[index];
            if (c >= 'U') {string[index] = 'U'; distance[index] = c - 'U';}
            else if (c >= 'O') {string[index] = 'O'; distance[index] = c - 'O';}
            else if (c >= 'I') {string[index] = 'I'; distance[index] = c - 'I';}
            else if (c >= 'E') {string[index] = 'E'; distance[index] = c - 'E';}
            else if (c >= 'A') {string[index] = 'A'; distance[index] = c - 'A';}
            index++;
        }

        printf("Case #%d:\n", i+1);
        printf("%s\n", string);
        for (int d = 0; d < index; d++) {
            printf("%d", distance[d]);
        }
        printf("\n");
    }
    return 0;
}

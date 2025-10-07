#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        char string[1001]; scanf("%s", string); getchar();

        int len = 0; while (string[len] != '\0') {len++;}

        char result[len+1];
        if (len % 2 == 1) result[len/2 +1] = string[len/2+1];
        for (int l = 0; l < len; l++) {
            result[l] = string[len-l-1];
        }
        result[len] = '\0';
        
        printf("Case #%d : %s\n", i+1, result);
    }
    return 0;
}
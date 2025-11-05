#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); for (int i = 0; i < tc; i++) {
        char string[501];
        scanf("%s", string);

        int correct = 0;
        int len = 0; while (string[len] != '\0') {len++;}
        if (len % 2 == 1) correct++;
        for (int l = 0; l < len / 2; l++) {
            if (string[l] - string[len-l-1] == 0) correct+=2;
        }

        printf("Case #%d: %s\n", i+1, correct == len ? 
            "Yay, it\'s a palindrome" : 
            "Nah, it\'s not a palindrome"
        );
    }
    return 0;
}

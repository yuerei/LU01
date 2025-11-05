#include <stdio.h>

// Convert letter into number (a=0, b=1, ..., z=25)
// Add number by K
// If the number is larger than 25, subtract 26 from it
// Repeat step 3 until the number is less than or equal to 25
// Convert number back into the letter

// First line single number T (TC)
// 1. N = length of string S and K
// 2. String S

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int i = 0; i < tc; i++) {
        int len, k; scanf("%d %d", &len, &k); getchar();
        char str[101]; scanf("%100[^\n]", str); getchar();
        char out[101];

        for (int j = 0; j < len; j++) {
            char ch = str[j];
            if (ch >= 'a' && ch <= 'z') {
                int num = ch - 'a';
                num = (num + k) % 26;
                out[j] = (char)(num + 'a');
            }
        }
        out[len] = '\0';

        printf("Case #%d: %s\n", i+1, out);
    }
    return 0;
}
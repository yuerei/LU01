#include<stdio.h>

int getLength(char *s) {
    if (*s == '\0') return 0;
    return 1 + getLength(s + 1);
}

char *reverse(char *s, int len) {
    if (len <= 1) return s;
    char temp = s[0];
    s[0] = s[len - 1];
    s[len - 1] = ' ';
    reverse(s + 1, len - 2);
    s[len - 1] = temp;
    return s;
}

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int _tc = 0; _tc < tc; _tc++) {
        char string[1001]; scanf("%s", string); getchar();
        printf("Case #%d: %s\n", _tc + 1, reverse(string, getLength(string)));
    }
    return 0;
}
#include <stdio.h>

int main() {
    char n[11];
    char m[101];
    char c;
    int o;
    scanf("%[^\n]", n); getchar();
    scanf("%[^\n]", m); getchar();
    scanf("%c %d", &c, &o); getchar();
    printf("Id    : %s\n", n);
    printf("Name  : %s\n", m);
    printf("Class : %c\n", c);
    printf("Num   : %d\n", o);
    return 0;
}
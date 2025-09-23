#include <stdio.h>

int main() {
    unsigned short a,b;
    scanf("%hu %hu", &a, &b);
    printf("%hu\n", a+b);
    printf("%hd\n", a-b);
    printf("%u\n", a*b);
    printf("%hu\n", a/b);
    printf("%hu\n", a%b);
    return 0;
}
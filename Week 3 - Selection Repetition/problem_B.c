#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    for (unsigned short i = 1; i <= T; i++) {
        unsigned short a,b,c,d,e,f;
        scanf("%hu %hu %hu %hu %hu %hu", &a, &b, &c, &d, &e, &f);
        printf("Case #%hu: ", i);
        for (int i = 1; i <=a; i++) {
            printf("a");
        }
        for (int i = 1; i <=b; i++) {
            printf("s");
        }
        for (int i = 1; i <=c; i++) {
            printf("h");
        }
        for (int i = 1; i <=d; i++) {
            printf("i");
        }
        for (int i = 1; i <=e; i++) {
            printf("a");
        }
        for (int i = 1; i <=f; i++) {
            printf("p");
        }
        printf("\n");
    }
    return 0;
}
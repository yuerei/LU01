#include <stdio.h>

int main() {
    unsigned short T, X;
    
    scanf("%hu", &T);
    for (unsigned short t = 1; t <= T; t++) {

        scanf("%hu", &X);
        for (unsigned short i = 1; i <= X; i++) {

            for (unsigned short j = 1; j <= X; j++) {
                if (j <= X - i) {
                    printf(" ");
                } else {
                    printf("*");
                    if (j + 1 == X) {
                        for (unsigned short k = 1; k < i; k++) {
                            printf("*");
                        }
                    }
                }
            }

            printf("\n");
        }

    }

    return 0;
}
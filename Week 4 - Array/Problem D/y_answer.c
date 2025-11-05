#include <stdio.h>

int main() {
    unsigned short tc; scanf("%hu", &tc); getchar(); for (int i = 0; i < tc; i++) {
        unsigned short child, choco; scanf("%hu %hu", &child, &choco);
        unsigned long long maxChoco[child], total = 0;
        for (int l = 0; l < child; l++) {
            unsigned long long childChoco = 0;
            for (int c = 0; c < choco; c++) {
                if (childChoco == 0) scanf("%llu", &childChoco);
                else {
                    unsigned long long temp; scanf("%llu", &temp);
                    if (temp > childChoco) childChoco = temp;
                }
            }
            maxChoco[l] = childChoco;
            childChoco = 0;
        }
        for (int l = 0; l < child; l++) {
            total += maxChoco[l];
        }
        printf("Case #%d: %llu\n", i+1, total);
    }
    return 0;
}
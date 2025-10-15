#include <stdio.h>

int main() {
    unsigned short tc; scanf("%hu", &tc);
    for (int i = 0; i < tc; i++) {
        char A[16], B[16]; scanf("%15s %15s", A, B);
        int digitA[16] = {0}, digitB[16] = {0}, result[16] = {0};

        int maxlenA = 0, maxlenB = 0;
        while (A[maxlenA] != '\0') maxlenA++;
        while (B[maxlenB] != '\0') maxlenB++;
        int maxlen = maxlenA > maxlenB ? maxlenA : maxlenB;

        for(int j = 0; j < maxlenA; j++) digitA[j] = A[j] - '0';
        for(int j = 0; j < maxlenB; j++) digitB[j] = B[j] - '0';

        for(int j = 0; j < maxlen; j++){
            if(maxlenA == maxlenB) result[j] = (digitA[j] + digitB[j]) % 10;
            else if(maxlenA > maxlenB){
                if(maxlenA - maxlenB <= j) result[j] = (digitA[j] + digitB[j - (maxlenA-maxlenB)]) % 10;
                else result[j] = digitA[j];
            }
            else {
                if(maxlenB - maxlenA <= j) result[j] = (digitA[j - (maxlenB-maxlenA)] + digitB[j]) % 10;
                else result[j] = digitB[j];
            }
        }

        // trim leading zeros
        int pos = 0;
        while(pos < maxlen - 1 && result[pos] == 0) pos++;

        printf("Case #%d: ", i+1);
        for(int j = pos; j < maxlen; j++) printf("%d", result[j]);
        printf("\n");
    }

    return 0;
}
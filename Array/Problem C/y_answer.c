#include <stdio.h>

int main() {
    int tc; scanf("%d", &tc); getchar(); for (int t = 0; t < tc; t++) {
        int matrixSize; scanf("%d", &matrixSize); getchar();

        int aMatrix[matrixSize][matrixSize];

        for (int c = 0; c < 3; c++) {
            int currentMatrix[matrixSize][matrixSize];
            for (int i = 0; i < matrixSize; i++) {
                for (int j = 0; j < matrixSize; j++) {
                    if (c == 0) scanf("%d", &aMatrix[i][j]);
                    else scanf("%d", &currentMatrix[i][j]);
                }
            }

            if (c > 0) {
                int tempRes[matrixSize][matrixSize];
                
                for (int i = 0; i < matrixSize; i++) {
                    for (int j = 0; j < matrixSize; j++) {
                        tempRes[i][j] = 0;
                        for (int k = 0; k < matrixSize; k++) {
                            tempRes[i][j] += aMatrix[i][k] * currentMatrix[k][j];
                        }
                    }
                }
                
                for (int x = 0; x < matrixSize; x++) {
                    for (int y = 0; y < matrixSize; y++) {
                        aMatrix[x][y] = tempRes[x][y];
                    }
                }
            }
        }

        printf("Case #%d:\n", t+1);
        for (int i = 0; i < matrixSize; i++) {
            for (int j = 0; j < matrixSize; j++) {
                printf("%d", aMatrix[i][j]);
                if (j < matrixSize - 1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" IF YOU WANT TO SUBMIT
 */
// #define DEBUG

int search (char base[][51], int size, char target[]) {
    for (int i = 0; i <  size; i++) if (strcmp(base[i], target) == 0) return i;
    return -1;
}

int main() {
    FILE *fp; fp = fopen("testdata.in", "r");

    int tc;
    fscanf(fp, "%d", &tc); fgetc(fp);
    #ifdef DEBUG
    printf("%d\n", tc);
    #endif
    for (int t = 0; t < tc; t++) {
        printf("Case #%d:\n", t+1);

        int query;
        fscanf(fp, "%d", &query); fgetc(fp);

        #ifdef DEBUG
        printf("%d\n", query);
        #endif

        char products[query][51];
        int stocks[query];
        int productCount = 0;
        int failed = 0;

        for (int q = 0; q < query; q++) {
            char qOperation[5];
            char qProduct[51];
            int qQuantity;
            fscanf(fp, "%[^#]#%[^#]#%d", qOperation, qProduct, &qQuantity); fgetc(fp);
            #ifdef DEBUG
            printf("%s - %s - %d\n", qOperation, qProduct, qQuantity);
            #endif

            int res = search(products, query, qProduct);
            if (res > -1) {
                #ifdef DEBUG
                printf("  > DEBUG : %s %d\n", products[res], stocks[res]);
                #endif
                if (qOperation[0] == 's') stocks[res] -= qQuantity;
                else if (qOperation[0] == 'b') stocks[res] += qQuantity;
                #ifdef DEBUG
                printf("  > DEBUG : %s %d\n", products[res], stocks[res]);
                #endif
            } else {
                strcpy(products[productCount], qProduct);
                if (qOperation[0] == 's') stocks[productCount] = -qQuantity;
                else if (qOperation[0] == 'b') stocks[productCount] = qQuantity;
                #ifdef DEBUG
                printf("  > DEBUG : NEW %s %d\n", products[productCount], stocks[productCount]);
                #endif
                productCount++;
            }
        }

        for (int pc = 0; pc < productCount; pc++) {
            if (stocks[pc] < 0) {
                failed = 1;
                break;
            }
        }
        if (failed == 1) {
            for (int pc = 0; pc < productCount; pc++) if (stocks[pc] < 0) printf("stock is not enough for product %s\n", products[pc]);
        } else {
            for (int pc = 0; pc < productCount; pc++) printf("%s - %d\n", products[pc], stocks[pc]);
        }
    }

    fclose(fp); return 0;
}
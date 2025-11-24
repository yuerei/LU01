#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;

    fp = fopen("testdata.in", "r");
    if (fp==NULL) {printf("File cant be opened."); return 0;}

    int n_data;
    char nim[n_data][11];
    char name[n_data][21];
    fscanf(fp, "%d", &n_data);
    for (int n = 0; n < n_data; n++) {
        fscanf(fp, "%s %s", nim[n], name[n]);
    }

    int n_query;
    fscanf(fp, "%d", &n_query);
    for (int n = 0; n < n_query; n++) {
        char qnim[11];
        fscanf(fp, "%s", qnim);

        for (int m = 0; m < n_data; m++) {
            // printf("Comparing = %s vs %s\n", nim[m], qnim);
            if (strcmp(nim[m], qnim) == 0) {
                printf("Case #%d: %s\n", n+1, name[m]);
                break;
            }
            if (m == n_data - 1) {
                printf("Case #%d: %s\n", n+1, "N/A");
            }
        }
    }

    fclose(fp);
    return 0;    
}
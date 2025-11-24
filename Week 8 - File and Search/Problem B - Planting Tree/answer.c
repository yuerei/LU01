#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;

    fp = fopen("testdata.in", "r");
    if (fp==NULL) {printf("File cant be opened."); return 0;}

    int n_data;
    fscanf(fp, "%d", &n_data);
    char friend[n_data][41];
    char tree[n_data][41];
    for (int n = 0; n < n_data; n++) {
        fscanf(fp, " %[^#] # %[^\n]", friend[n], tree[n]);
    }

    int n_query;
    fscanf(fp, "%d", &n_query);
    for (int n = 0; n < n_query; n++) {
        char friend_query[41];
        fscanf(fp, "%s", friend_query);

        int found = 0; 
        for (int m = 0; m < n_data; m++) {
            if (strcmp(friend[m], friend_query) == 0) {
                printf("Case #%d: %s\n", n + 1, tree[m]);
                found = 1; 
                break;
            }
        }
        
        if (found == 0) printf("Case #%d: %s\n", n + 1, "N/A");
    }

    fclose(fp);
    return 0;    
}
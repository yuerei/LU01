#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("testdata.in", "r");
    if (fp==NULL) {printf("File cant be opened."); return 0;}

    int tc;
    fscanf(fp, "%d", &tc);
    
    for (int _tc = 0; _tc < tc; _tc++) {
        char base[101];
        int freq[26] = {0};
        fscanf(fp, " %[^\n]", base);

        int index = 0;
        while (base[index] != '\0') {
            freq[base[index] - 'A']++;
            index++;
        }

        int swap;
        fscanf(fp, "%d", &swap);
        for (int s = 0; s < swap; s++) {
            char from, to;
            fscanf(fp, " %c %c", &from, &to);
            // printf("%c %c\n", from, to);
            freq[to - 'A'] += freq[from - 'A'];
            freq[from - 'A'] = 0;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                printf("%c %d\n", 'A' + i, freq[i]);
            }
        }
    }

    fclose(fp);
    return 0;    
}
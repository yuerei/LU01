#include <stdio.h>

/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" OR COMMENT IT IF YOU WANT TO SUBMIT
 */
// #define DEBUG

int main() {
    FILE *fp;
    fp = fopen("testdata.in", "r");
    
    int tc;
    fscanf(fp, "%d", &tc); fgetc(fp);
    for (int _tc = 0; _tc < tc; _tc++) {
        char base[101];
        int freq[26] = {0};
        int lock[26] = {0};
        int swap;

        fscanf(fp, "%s", base); fgetc(fp);
        fscanf(fp, "%d", &swap); fgetc(fp);

        #ifdef DEBUG
        printf("%s\n", base);
        #endif

        for (int s = 0; s < swap; s++) {
            char from, to, space;
            fscanf(fp, "%c%c%c", &from, &space, &to); fgetc(fp);
            #ifdef DEBUG
            printf("from %c to %c\n", from, to);
            #endif
            int index = 0;
            while (base[index] != '\0') {
                if (base[index] == from && lock[from - 'A'] == 0) {
                    base[index] = to;
                }
                index++;
            }
            lock[from - 'A'] = 1;
        }

        #ifdef DEBUG
        printf("%s\n", base);
        #endif

        int index = 0;
        while (base[index] != '\0') {
            freq[base[index] - 'A']++;
            index++;
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
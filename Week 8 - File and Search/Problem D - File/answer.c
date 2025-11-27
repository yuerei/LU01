#include <stdio.h>
#include <string.h>

int search (char base[][51], int size, char target[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(base[i], target) == 0) return i;
    }
    return -1;
}

int main() {
    FILE *fp;
    fp = fopen("testdata.in", "r");

    if (fp == NULL) return 1; // Basic error check

    // 1. Read Dictionary Size and Consume Newline
    int dictSize;
    fscanf(fp, "%d", &dictSize);
    fgetc(fp); // Consumes the newline after dictSize

    // VLA is used for the dictionary arrays (N <= 100) [cite: 226]
    char dictShort[dictSize][51];
    char dictLong[dictSize][51];
    
    // 2. Read Dictionary Entries
    for (int ds = 0; ds < dictSize; ds++) {
        // Space at start skips leading whitespace (including newline)
        fscanf(fp, " %[^#]#%[^\n]", dictShort[ds], dictLong[ds]);
        fgetc(fp); // FIX: Consumes the newline left after reading dictLong
    }

    // 3. Read Query Count and Consume Newline
    int query;
    fscanf(fp, "%d", &query);
    fgetc(fp); // Consumes the newline after query count

    // 4. Process Queries
    for (int q = 0; q < query; q++) {
        printf("Case #%d:\n", q + 1);

        char sentences[101] = {0};
        fscanf(fp, "%[^\n]", sentences); // NOTE: & is redundant when using array name
        fgetc(fp); // FIX: Consumes the newline left after reading the sentence

        int index = 0;
        char currNow[101] = {0};
        int nowIndex = 0;
        
        while (sentences[index] != '\0') {
            if (sentences[index] != ' ') {
                currNow[nowIndex++] = sentences[index];
            } else { // Found a space (end of a word)
                currNow[nowIndex] = '\0'; // Terminate the current word
                
                int res = search(dictShort, dictSize, currNow);
                
                // If found, print long word; otherwise, print short word (CRITICAL FIX)
                if (res >= 0) {
                    printf("%s ", dictLong[res]);
                } else {
                    printf("%s ", currNow); // Print the input word unchanged 
                }
                
                nowIndex = 0; // Reset index for the next word
            }
            index++;
        }
        
        // 5. Process the Last Word
        if (nowIndex > 0) {
            currNow[nowIndex] = '\0'; // Terminate the last word
            int res = search(dictShort, dictSize, currNow);
            
            // If found, print long word; otherwise, print short word (CRITICAL FIX)
            if (res >= 0) {
                printf("%s", dictLong[res]);
            } else {
                printf("%s", currNow); // Print the input word unchanged 
            }
        }

        printf("\n");
    }
    
    fclose(fp);
    return 0;
}
#include <stdio.h>
/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" IF YOU WANT TO SUBMIT
 */
// #define DEBUG

int main() {
    FILE *fp; fp = fopen("testdata.in", "r");

    int tc;
    fscanf(fp, "%d", &tc);
    for (int t = 0; t < tc; t++) {
        int dur;
        int min;
        int max;
        fscanf(fp, "%d %d %d", &dur, &min, &max);
        char lightning[10001];
        fscanf(fp, "%s", lightning);

        int lightning_count = 0;
        int current_sound_duration = 0;

        for (int i = 0;  i < dur; i++) {
            if (lightning[i] == '1') {
                current_sound_duration++;
            } else {
                if (current_sound_duration >= min && current_sound_duration <= max) {
                    lightning_count++;
                }
                current_sound_duration = 0;
            }
        }
        if (current_sound_duration >= min && current_sound_duration <= max) lightning_count++;

        printf("Case #%d: %d\n", t+1, lightning_count);
    }

    fclose(fp); return 0;
}
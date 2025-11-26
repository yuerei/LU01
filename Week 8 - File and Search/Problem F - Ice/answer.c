#include <stdio.h>
/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" IF YOU WANT TO SUBMIT
 */
// #define DEBUG

int abs(int n) {
    if (n < 0) return -n;
    else return n;
}

int main() {
    FILE *fp; fp = fopen("testdata.in", "r");

    int tc;
    fscanf(fp, "%d", &tc);
    for (int t = 0; t < tc; t++) {
        printf("Case #%d: ", t+1);

        int stack;
        fscanf(fp, "%d", &stack);
        
        int total = 0;
        int perimeter = 0;

        int height[stack];
        for (int s = 0; s < stack; s++) {
            fscanf(fp, "%d", &height[s]);
            total += height[s];
        }
        int area = total * 2 * 2;

        // LEFT PERI
        perimeter += height[0] * 2;
        // MID PERI
        for (int s = 0; s < stack-1; s++) {
            perimeter += abs((height[s] - height[s+1])) * 2;
        }
        // RIGHT PERI
        perimeter += height[stack-1] * 2;
        // TOP AND BOT
        perimeter += stack * 2 * 2;

        printf("%d %d\n", perimeter, area);
    }

    fclose(fp); return 0;
}
#include <stdio.h>

int main() {
    int a,b;
    float c;
    scanf("%d %d", &a, &b);
    getchar();
    c = (((float) b/ (float) a) * 100.0);
    printf("%.4f%%\n", c);
}
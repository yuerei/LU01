#include<stdio.h>

int calc(int n, int *count) {
    if (n > 0 && n % 3 == 0) (*count)++;
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n % 5 == 0) return n * 2;
    return calc(n - 1, count) + n + calc(n - 2, count) + n - 2;
}

int main() {
    int tc; scanf("%d", &tc); for (int _tc = 0; _tc < tc; _tc++) {
        int  n; scanf("%d", &n);
        int count = 0;
        int result = calc(n, &count);
        printf("Case #%d: %d %d\n", _tc + 1, result, count);
    }
    return 0;
}
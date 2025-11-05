#include <stdio.h>

void fib(int n, char a, char b, char *result) {
    if (n == 0) {
        result[0] = a;
        result[1] = '\0';
        return;
    }
    if (n == 1) {
        result[0] = b;
        result[1] = '\0';
        return;
    }
    char first[1000];
    char second[1000];
    fib(n - 1, a, b, first);
    fib(n - 2, a, b, second);
    sprintf(result, "%s%s", first, second);
}

int main() {
	int tc; scanf("%d", &tc); getchar(); for (int _tc = 0; _tc < tc; _tc++) {
        int n; scanf("%d", &n);
        char a, b; scanf(" %c %c", &a, &b); getchar();
        char result[10000];
        fib(n, a, b, result);
        printf("Case #%d: %s\n", _tc + 1, result);
	}
}
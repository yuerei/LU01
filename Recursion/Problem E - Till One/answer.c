#include <stdio.h>

int tl(int n) {
	if (n == 1) return 1;
	if (n % 2 == 1) return tl(n - 1) + tl(n + 1);
	if (n % 2 == 0) return tl(n / 2);
}

int main() {
	int tc; scanf("%d", &tc); for (int _tc = 0; _tc < tc; _tc++) {
		int num; scanf("%d", &num);
		printf("Case #%d: %d\n", _tc + 1, tl(num));
	}
}

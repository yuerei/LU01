#include <stdio.h>

// * This is not a recursive problem, but it should've been answered in recursion way
// * but I was too lazy to do so.
// * So I just did it in a simple way.
// * Please contribute if you can do it in a recursive way.

int main() {
	int tc; scanf("%d", &tc); for (int _tc = 0; _tc < tc; _tc++) {
		int day; scanf("%d", &day);
		int trees[day], total = 0;
		for (int _day = 0; _day < day; _day++) {
			scanf("%d", &trees[_day]);
			total += trees[_day];
		}
		printf("Case #%d: %d\n", _tc + 1, total);
	}
}

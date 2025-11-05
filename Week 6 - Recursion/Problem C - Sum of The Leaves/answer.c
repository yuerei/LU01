#include <stdio.h>

int tree[101];

void checkLeave(int pos, int total, int max) {
	total += tree[pos];
	
	if (pos * 2 > max) {
		printf("%d\n", total);
		return;
	}
	
	if (pos * 2 == max) checkLeave(pos * 2, total, max);
	else {
		checkLeave(pos * 2, total, max);
		checkLeave(pos * 2 + 1, total, max);
	}
}
		
int main() {
	int tc; scanf("%d", &tc); for (int _tc = 0; _tc < tc; _tc++) {
		int max; scanf("%d", &max); 
		for (int i = 0; i < max; i++) {
			scanf("%d", &tree[i + 1]);
		}
		printf("Case #%d:\n", _tc+1);
		checkLeave(1, 0, max);
	}
	return 0;
}

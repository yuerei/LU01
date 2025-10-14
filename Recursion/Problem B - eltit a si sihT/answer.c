#include <stdio.h>

void reverse(char *n, int index) {
	if (n[index] == '\0') return;
	reverse(n, index+1); // jalanin sampe selesai (jadi cari panjangnya)
	printf("%c", n[index]); // call ke belakang (ke kiri)
}

int main() {
	int tc; scanf("%d", &tc); getchar(); for (int _tc = 0; _tc < tc; _tc++) {
		char str[1001]; scanf("%[^\n]", str); getchar();
		printf("Case #%d: ", _tc + 1);
		reverse(&str, 0);
		printf("\n");
	}
	return 0;
}

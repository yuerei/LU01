#include <stdio.h>

char map[100][100];

int floodFill(int x, int y, int endX, int endY) {
	int count = 0;
	if (map[x][y] == '.') {
		map[x][y] = 'W';
		count++;
	}
	// up
	if (x > 0 && map[x-1][y] == '.') {
		count += floodFill(x-1,y, endX, endY);
	}
	// down
	if (x < endX - 1 && map[x + 1][y] == '.') {
		count += floodFill(x+1, y, endX, endY);
	}
	// left
	if (y > 0 && map[x][y - 1] == '.') {
		count += floodFill(x, y - 1, endX, endY);
	}
	// right
	if (y < endY - 1 && map[x][y + 1] == '.') {
		count += floodFill(x, y + 1, endX, endY);
	}
	return count;
}

int main() {
	int tc; scanf("%d", &tc); for (int _tc = 0; _tc < tc; _tc++) {
        int sRow, sCol, row, col;
        scanf("%d %d", &row, &col);  getchar();
		for (int r = 0; r < row; r++) {
			for (int c = 0; c < col; c++) {
				scanf("%c", &map[r][c]);
				if (map[r][c] == 'S') {
					sRow = r;
					sCol = c;
				}
			}
			getchar();
		}
		int result = floodFill(sRow, sCol, row, col);
		printf("Case #%d: %d\n", _tc + 1, result);
	}
}

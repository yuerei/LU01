#include <stdio.h>

int reach(int curr_x, int curr_y, int end_x, int end_y, int limit) {
    // Base Case
    if (limit == 0) return (curr_x == end_x && curr_y == end_y);
	if (curr_x == end_x && curr_y == end_y) return 0;
	
	// Knight Moveset
	int moveX[] = {-2,-2,-1,-1,1,1,2,2};
	int moveY[] = {-1,1,-2,2,-2,2,-1,1};
	
    for (int i = 0; i < 8; i++) {
        // Try all moves
        int next_x = curr_x + moveX[i];
        int next_y = curr_y + moveY[i];
        
        // Check boundaries
        if (next_x >= 0 && next_x < 8 && next_y >= 0 && next_y < 8) {
            if (reach(next_x, next_y, end_x, end_y, limit - 1)) {
                return 1;
            }
        }
    }
	
	return 0;
}

int solve(char from[3], char to[3]) {
	//	Change to Chess Notation
	int from_x = from[0] - 'A';
	int from_y = from[1] - '1';
	int to_x = to[0] - 'A';
	int to_y = to[1] - '1';

	if (from_x == to_x && from_y == to_y) return 0;
    
    for (int limit = 1; limit <= 6; ++limit) {
        if (reach(from_x, from_y, to_x, to_y, limit)) {
            return limit;
        }
    }

    return 0;
}

int main() {
	int tc; scanf("%d", &tc); getchar(); for (int _tc = 0; _tc < tc; _tc++) {
		char from[3], to[3];
		scanf("%s %s", from, to);
		
		int result = solve(from, to);
		printf("Case #%d: %d\n", _tc + 1, result);
	}
	return 0;
}

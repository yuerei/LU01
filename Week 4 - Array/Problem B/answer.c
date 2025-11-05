#include <stdio.h>

int main(){
	unsigned short T, N, M, Q;
	scanf("%hu ", &T);
	for(int i = 0; i < T; i++){
		scanf("%hu %hu %hu ", &N, &M, &Q);
		unsigned short move[N][M], turn[Q], room[M];
		for(int j = 0; j < N; j++) for(int k = 0; k < M; k++) scanf("%hu", &move[j][k]);;
		for(int j = 0; j < Q; j++) scanf("%hu", &turn[j]);
		for(int j = 0; j < M; j++) room[j] = 0;
		for(int j = 0; j < Q; j++) for(int k = 0; k < M; k++) room[k] = room[k] ^ move[turn[j]-1][k];;

		printf("Case #%d:\n", i+1);
		for(int j = 0; j < M; j++){
			if(room[j] == 1) printf("YES\n");
			else if(room[j] == 0) printf("NO\n");
		}
	}	
	return 0;
}

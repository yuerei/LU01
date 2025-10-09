#include <stdio.h>

int main(){
	unsigned short T, N, M;
	scanf("%hu ", &T);

	for(int i = 0; i < T; i++){
		scanf("%hu %hu", &N, &M);
		unsigned long long weight[N][M], total = 0;
		for(int j = 0; j < N; j++) for(int k = 0; k < M; k++) scanf("%llu", &weight[j][k]);
		for(int j = 0; j < N; j++){
			unsigned long long max = 0;
			for(int k = 0; k < M; k++){
				if(weight[j][k] > max) max = weight[j][k];	
			}
			total += max;
		}

		printf("Case #%d: %llu\n", i+1, total);
	
	}
	return 0;
}

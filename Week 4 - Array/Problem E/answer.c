#include <stdio.h>

int main(){
	unsigned short T, N;
	scanf("%hu ", &T);
	for(int i = 0; i < T; i++){
		scanf("%hu", &N);
		unsigned short A[N], coolfactor = 0;
		for(int j = 0; j < N; j++) scanf("%hu", &A[j]);
		for(int j = 0; j < N; j++){
			for(int k = 0; k < N; k++){
				if(j == k) continue;
				for(int l = k+1; l < N; l++){
					if(j == l) continue;
					if(k == l) continue;
					if(A[j] == A[k] + A[l]){coolfactor++; k=N; break;}
				}
			}
		}
		printf("Case #%d: %hu\n", i+1, coolfactor);
	
	}
	return 0;
}

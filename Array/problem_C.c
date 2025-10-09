#include <stdio.h>


int main(){
	unsigned short T, N;
	scanf("%hu ", &T);

	for(int i = 0; i < T; i++){
		scanf("%hu ", &N);
		int A[N][N], B[N][N], C[N][N], result1[N][N], result2[N][N];
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) scanf("%d", &A[j][k]);
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) scanf("%d", &B[j][k]);
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) scanf("%d", &C[j][k]);
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++){ result1[j][k] = 0; result2[j][k] = 0;}
		
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) for(int l = 0; l < N; l++) result1[j][k] += A[j][l] * B[l][k];
		for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) for(int l = 0; l < N; l++) result2[j][k] += result1[j][l] * C[l][k];

		printf("Case #%d:\n", i+1);
		for(int j = 0; j < N; j++){
			for(int k = 0; k < N; k++){
				printf("%d", result2[j][k]); 
				if(k < N - 1) printf(" "); 
				else if(k == N -1) printf("\n");
			}
		}

	}
	return 0;
}

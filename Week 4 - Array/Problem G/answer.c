#include <stdio.h>

int main(){
	unsigned short N;
		scanf("%hu", &N);
		unsigned short matrix[N][N];
		for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%hu", &matrix[i][j]);
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				for(int k = 0; k < N; k++){
					if(i == k || j == k) continue;
					else if(matrix[i][j] == matrix[k][j] || matrix[i][j] == matrix [i][k]){printf("Nay\n"); return 0;}
				}	
			}
		}
	printf("Yay\n");
	return 0;
}

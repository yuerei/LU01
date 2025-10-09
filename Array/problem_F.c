#include <stdio.h>
#include <string.h>

int main(){
	unsigned short T;
	char A[8], B[8]; 
	int digitA[8], digitB[8], result[8];
	scanf("%hu ", &T);

	for(int i = 0; i < T; i++){
		scanf("%7s %7s", A, B);
		int maxlenA = strlen(A), maxlenB = strlen(B), maxlen = maxlenA > maxlenB ? maxlenA : maxlenB;

		for(int j = 0; j < maxlenA; j++) digitA[j] = A[j] - '0';
		for(int j = 0; j < maxlenB; j++) digitB[j] = B[j] - '0';

		for(int j = 0; j < maxlen; j++){
			if(maxlenA == maxlenB) result[j] = (digitA[j] + digitB[j]) % 10;
			else if(maxlenA > maxlenB){
				if(maxlenA - maxlenB <= j) result[j] = (digitA[j] + digitB[j - (maxlenA-maxlenB)]) % 10;
				else result[j] = digitA[j];
			}
			else if(maxlenA < maxlenB){
				if(maxlenB - maxlenA <= j) result[j] = (digitA[j - (maxlenB-maxlenA)] + digitB[j]) % 10;
				else result[j] = digitB[j];
			}
		}
		for(int j = 0, n = 0; j < maxlen; j++){
			if(result[0] != 0) break;
			if(result[j] == 0) n++;
			if(maxlen <= n){result[0] = 0; maxlen = 1; break;}
			if(n > 0 && result[j] != 0){ 
				maxlen = maxlen - n;
				for(int k = 0; k < maxlen; k++) result[k] = result[n + k];
				break;
			}
		}

		printf("Case #%d: ", i+1);
		for(int j = 0; j < maxlen; j++) printf("%d", result[j]);
		printf("\n");

	}	

	return 0;
}

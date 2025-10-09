#include <stdio.h>

int main(){
	unsigned short N;
	scanf("%hu ", &N);

	unsigned int A[N], booked[N], happy = 0;
	for(int i = 0; i < N; i++) booked[i] = 0;
	for(int i = 0; i < N; i++) scanf("%u", &A[i]);
	for(int i = 0; i < N; i++){
		int repeat = 0;
		for(int j = 0; j < N; j++){
			if(A[i] == booked[j]){repeat = 1; break;}
		}
		if(repeat == 1) continue;
		happy++;
		booked[i] = A[i];
	}
	printf("%u\n", happy);
}

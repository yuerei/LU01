#include <stdio.h>

int main(){
	unsigned int N;
	scanf("%u ", &N);
	unsigned int A[N], B[N];
	
	for(int i=0; i < N; i++) scanf("%u", &A[i]);
	for(int i=0; i < N; i++) scanf("%d", &B[A[i]]);
	for(int i=0; i < N; i++) {
	       	printf("%d", B[i]);
		if(i < N -1) printf(" ");
	}
	printf("\n");
	return 0;

}

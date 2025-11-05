#include <stdio.h>

int main() {
    unsigned int size; scanf("%u", &size);
    int arr[size][size];
    for (unsigned int i = 0; i < size; i++) {
        for (unsigned int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                if(i == k || j == k) continue;
                else if(arr[i][j] == arr[k][j] || arr[i][j] == arr[i][k]){printf("Nay\n"); return 0;}
            }	
        }
    }
    printf("Yay\n");
    return 0;
}
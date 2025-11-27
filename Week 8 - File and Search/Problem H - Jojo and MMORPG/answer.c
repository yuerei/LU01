#include <stdio.h>
/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" IF YOU WANT TO SUBMIT
 */
// #define DEBUG

void swap(long long int* a, long long int* b) {
    long long int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(unsigned long long arr[], int N){
        for(int i = 0; i < N; i++) for(int j = i + 1; j < N; j++) if(arr[j] < arr[i]) swap(&arr[i], &arr[j]);
}

int main() {
    short missionCount;
    scanf("%hd", &missionCount);

    unsigned long long missions[missionCount];
    short passed = 0;

    for (int t = 0; t < missionCount; t++) {
        scanf("%llu", &missions[t]);
    }

    unsigned long long power;
    scanf("%llu", &power);

    if (missionCount > 0) {
        bubbleSort(missions, missionCount);
    }

    for (int t = 0; t < missionCount; t++) {
        if (missions[t] <= power) {
            passed++;
            power -= missions[t];
        } else break;
    }

    printf("%hd\n", passed);
    
    return 0;
}
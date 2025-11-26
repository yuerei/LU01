#include <stdio.h>
/**
 * SET THIS TO "DEBUG", IF YOU WANT TO SEE THE PROCESS
 * DON'T FORGET TO SET IT TO "ANYTHING ELSE" IF YOU WANT TO SUBMIT
 */
// #define DEBUG

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int missionCount;
    scanf("%d", &missionCount);

    int missions[missionCount];
    int passed = 0;

    for (int t = 0; t < missionCount; t++) {
        scanf("%d", &missions[t]);
    }

    int power;
    scanf("%d", &power);

    quickSort(missions, 0, missionCount - 1);

    for (int t = 0; t < missionCount; t++) {
        if (missions[t] <= power) {
            passed++;
            power -= missions[t];
        } else if (missions[t] > power) break;
    }

    printf("%d", passed);
    
    return 0;
}
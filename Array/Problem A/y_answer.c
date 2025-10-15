#include <stdio.h>

int main() {
    unsigned int size;
    scanf("%u", &size);

    int array[size];
    int saveAt[size];

    int result[size];
    for (unsigned int i = 0; i < size; i++) {
        scanf(" %d", &saveAt[i]);
    }
    for (unsigned int i = 0; i < size; i++) {
        scanf(" %d", &array[i]);
    }

    for (unsigned int i = 0; i < size; i++) {
        result[saveAt[i]] = array[i];
    }

    for (unsigned int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
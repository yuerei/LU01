#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char id[11];
    char name[16];
    int score;
};


int main(int argc, char const *argv[])
{
    long long query;
    scanf("%lld", &query); getchar();

    struct Student *student = malloc(query * sizeof(struct Student));
    
    long long sum = 0;
    for (int q = 0; q < query; q++) {
        scanf("%[^\n]", &student[q].id); getchar();
        scanf("%[^\n]", &student[q].name); getchar();
        scanf("%d", &student[q].score); getchar();
        sum += student[q].score;
    }

    for (int q = 0; q < query; q++) {
        if ((long long)student[q].score * query >= sum) {
            printf("%s %s\n", student[q].id, student[q].name);
        }
    }
    free(student);
    return 0; 
}

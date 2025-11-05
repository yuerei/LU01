#include <stdio.h>

struct Course
{
    char code[9];
    char name[101];
    int credit;
};


int main(int argc, char const *argv[])
{
    int query;
    scanf("%d", &query); getchar();
    struct Course course[query];
    for (int q = 0; q < query; q++) {
        scanf("%[^\n]", &course[q].code); getchar();
        scanf("%[^\n]", &course[q].name); getchar();
        scanf("%d", &course[q].credit); getchar();
    }

    int search;
    scanf("%d", &search); getchar();
    for (int s = 0; s < search; s++) {
        int sQuery;
        scanf("%d", &sQuery); getchar();
        sQuery--;
        printf("Query #%d:\n", s+1);
        printf("Code: %s\n", course[sQuery].code);
        printf("Name: %s\n", course[sQuery].name);
        printf("Credits: %d\n", course[sQuery].credit);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char code[31];
    char name[31];
    char gender[10];
    char father[31];
    char mother[31];
    int numOfSibling;
};

struct Lecturer {
    char code[31];
    char name[31];
    char gender[10];
    int numOfStudent;
    struct Student *students;
};

int main()
{
    int lectQuery;
    scanf("%d", &lectQuery); getchar();
    struct Lecturer lecturers[lectQuery];

    for (int lq = 0; lq < lectQuery; lq++) {
        scanf("%[^\n]", &lecturers[lq].code); getchar();
        scanf("%[^\n]", &lecturers[lq].name); getchar();
        scanf("%[^\n]", &lecturers[lq].gender); getchar();
        scanf("%d", &lecturers[lq].numOfStudent); getchar();

        lecturers[lq].students = (struct Student*) malloc(lecturers[lq].numOfStudent * (sizeof(struct Student)));

        for (int sq = 0; sq < lecturers[lq].numOfStudent; sq++) {
            scanf("%[^\n]", &lecturers[lq].students[sq].code); getchar();
            scanf("%[^\n]", &lecturers[lq].students[sq].name); getchar();
            scanf("%[^\n]", &lecturers[lq].students[sq].gender); getchar();
            scanf("%[^\n]", &lecturers[lq].students[sq].father); getchar();
            scanf("%[^\n]", &lecturers[lq].students[sq].mother); getchar();
            scanf("%d", &lecturers[lq].students[sq].numOfSibling); getchar();
        }
    }

    int search;
    scanf("%d", &search); getchar();
    search--;
    printf("Kode Dosen: %s\n", lecturers[search].code);
    printf("Nama Dosen: %s\n", lecturers[search].name);
    printf("Gender Dosen: %s\n", lecturers[search].gender);
    printf("Jumlah Mahasiswa: %d\n", lecturers[search].numOfStudent);
    for (int sc = 0; sc < lecturers[search].numOfStudent; sc++) {
        printf("Kode Mahasiswa: %s\n", lecturers[search].students[sc].code);
        printf("Nama Mahasiswa: %s\n", lecturers[search].students[sc].name);
        printf("Gender Mahasiswa: %s\n", lecturers[search].students[sc].gender);
        printf("Nama Ayah: %s\n", lecturers[search].students[sc].father);
        printf("Nama Ibu: %s\n", lecturers[search].students[sc].mother);
        printf("Jumlah Saudara Kandung: %d\n", lecturers[search].students[sc].numOfSibling);
    }

    for (int lq = 0; lq < lectQuery; lq++) {
        free(lecturers[lq].students);
    }
    return 0;
}

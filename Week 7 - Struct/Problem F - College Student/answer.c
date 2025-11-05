#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[101];
    char nim[10];
    int age;
    int posCode;
    char birthPlace[101];
    char birthDate[101];
    char highSchool[101];
    int numOfSib;
    int height;
    int bankAcc;
};

int main(int argc, char const *argv[])
{
    int query;
    scanf("%d", &query); getchar();

    struct Student *student = malloc(query * sizeof(struct Student));
    
    for (int q = 0; q < query; q++) {
        scanf("%[^\n]", &student[q].name); getchar();
        scanf("%[^\n]", &student[q].nim); getchar();
        scanf("%d", &student[q].age); getchar();
        scanf("%d", &student[q].posCode); getchar();
        scanf("%[^\n]", &student[q].birthPlace); getchar();
        scanf("%[^\n]", &student[q].birthDate); getchar();
        scanf("%[^\n]", &student[q].highSchool); getchar();
        scanf("%d", &student[q].numOfSib); getchar();
        scanf("%d", &student[q].height); getchar();
        scanf("%d", &student[q].bankAcc); getchar();
    }

    for (int q = 0; q < query; q++) {
        printf("Mahasiswa ke-%d:\n", q+1);
        printf("Nama: %s\n", student[q].name);
        printf("NIM: %s\n", student[q].nim);
        printf("Umur: %d\n", student[q].age);
        printf("Kode Pos: %d\n", student[q].posCode);
        printf("Tempat Lahir: %s\n", student[q].birthPlace);
        printf("Tanggal Lahir: %s\n", student[q].birthDate);
        printf("Almamater SMA: %s\n", student[q].highSchool);
        printf("Jumlah Saudara Kandung: %d\n", student[q].numOfSib);
        printf("Tinggi Badan: %d\n", student[q].height);
        printf("NOMOR REKENING: %d\n", student[q].bankAcc);
    }

    free(student);
    return 0;
}

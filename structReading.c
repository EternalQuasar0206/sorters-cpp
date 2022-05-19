#include<stdio.h>
#include<string.h>

typedef struct{
    char name[30];
    float rc;
} student;

int main() {
    int i;
    student a[5];

    int index = 0;

    while(index < 5) {
        printf("Type the student name: ");
        scanf("%s", a[index].name);

        printf("Type the student RC: ");
        scanf("%e", &(a[index].rc));

        index++;
    }

    for(i=0;i<5;i++)
        printf("%s%.2f\n",a[i].nome,a[i].cr);

    return 0;
}
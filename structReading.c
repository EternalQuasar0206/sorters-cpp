#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[30];
    float cr;
} aluno;

int main() {
    int i;
    aluno a[5];

    int index = 0;

    while(index < 5) {
        printf("Digite o nome do aluno: ");
        scanf("%s", a[index].nome);

        printf("Digite o CR do aluno: ");
        scanf("%e", &(a[index].cr));

        index++;
    }

    index = 0;
    int j;
    aluno temp;

    for (index = 0; index < 5; ++index)
    {
        for (j = index + 1; j < 10; ++j)
        {
            if (a[index].cr < a[j].cr)
            {
                temp = a[index];
                a[index] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0;i<5;i++)
        printf("%s%.2f\n",a[i].nome,a[i].cr);

    return 0;
}
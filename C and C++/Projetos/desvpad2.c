#include <stdio.h>

int main() {
    int n_alunos = 0; // Start with 0 students
    int nota;
    char add_aluno = 'y';
    float lista_notas[100];

    while (add_aluno == 'y') {
        printf("Digite a nota do %d aluno\n", n_alunos + 1);
        scanf("%d", &nota);
        lista_notas[n_alunos] = nota;
        n_alunos++;

        printf("Voce quer adicionar mais alunos? (y/n)\n");
        getchar();
        scanf("%c", &add_aluno);
    }

    for(int i = 0; i < n_alunos; i++) {
        printf("Nota do aluno %d: %d\n", i + 1, lista_notas[i]);
    }

    printf("ok\n");

    return 0;
}
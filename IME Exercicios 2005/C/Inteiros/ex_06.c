#include <stdio.h>

int n_alunos;
int notas_alunos[20];
int nota_maxima = 0;
int nota_minima = 100;

int main(){
    printf("Digite o numero de alunos: \n");
    scanf("%d", &n_alunos);

    for (int i=0; i < n_alunos; i++){
        printf("Digite a nota do %d aluno: ", (i+1));
        scanf("%d", &notas_alunos[i]);
        if (notas_alunos[i] > nota_maxima){
            nota_maxima = notas_alunos[i];
        }
        if (notas_alunos[i] < nota_minima){
            nota_minima = notas_alunos[i];
        }
    }
    printf("Nota maxima: %d\n", nota_maxima);
    printf("Nota minima: %d", nota_minima);

    return 0;
}

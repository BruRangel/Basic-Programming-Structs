#include <stdio.h>
#include <math.h>

int main(){
    int n_alunos = 1;
    float nota;
    int add_aluno = 1;
    float lista_notas[100];
    float soma_notas;
    float media;
    float variancia;
    float soma_variancia_quadratica = 0;

    for(n_alunos; n_alunos >= 0; n_alunos++){
        printf("Digite a nota do %d aluno\n", n_alunos);
        scanf("%f", &nota);
        soma_notas += nota;
        lista_notas[n_alunos - 1] = nota;
        printf("Voce quer adicionar mais alunos? (1 = y | 0 = n)\n");
        getchar();
        scanf("%d", &add_aluno);
        if (add_aluno == 0){
            break;
        }
    }

    for(int i = 0; i < n_alunos; i++){
        printf("nota do %d aluno: %.2f\n", i + 1, lista_notas[i]);
    }

    printf("n_alunos: %d\n", n_alunos);
    media = soma_notas/n_alunos;
    printf("A media da sala e: %.2f\n", media);

    for(int i = 0; i < n_alunos; i++){
        variancia = (lista_notas[i]) - media;
        soma_variancia_quadratica += (variancia*variancia);
    }

    float desvio_padrao = sqrt((soma_variancia_quadratica)/n_alunos);
    printf("desvio padrao: %.2f", desvio_padrao);

    return 0;
}

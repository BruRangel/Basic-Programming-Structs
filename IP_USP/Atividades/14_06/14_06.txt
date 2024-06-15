#include <stdio.h>
#include <stdlib.h>

void alocarTamanhoMatriz(int *linhas, int *colunas) {
    printf("Digite o numero de linhas (max 10): ");
    scanf("%d", linhas);
    printf("Digite o numero de colunas (max 10): ");
    scanf("%d", colunas);
}

void defElementosMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        printf("\n");
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");
}

void maiorLinha(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        int maior = matriz[i][0];
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("Maior elemento na linha %d: %d\n", i, maior);
    }
}

void menorLinha(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        int menor = matriz[i][0];
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        printf("Menor elemento na linha %d: %d\n", i, menor);
    }
}

void maiorColuna(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < colunas; i++) {
        int maior = matriz[0][i];
        for (int j = 0; j < linhas; j++) {
            if (matriz[j][i] > maior) {
                maior = matriz[j][i];
            }
        }
        printf("Maior elemento da coluna %d: %d\n", i, maior);
    }
}

void menorColuna(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < colunas; i++) {
        int menor = matriz[0][i];
        for (int j = 0; j < linhas; j++) {
            if (matriz[j][i] < menor) {
                menor = matriz[j][i];
            }
        }
        printf("Menor elemento da coluna %d: %d\n", i, menor);
    }
}

void maiorElemento(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maior = matriz[0][0], linha = 0, coluna = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("O maior elemento: %d, na linha: %d e coluna: %d\n", maior, linha, coluna);
}

void menorElemento(int linhas, int colunas, int matriz[linhas][colunas]) {
    int menor = matriz[0][0], linha = 0, coluna = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("O menor elemento: %d, na linha: %d e coluna: %d\n", menor, linha, coluna);
}

void somaLinhas(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        int soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
        printf("A soma da linha %d: %d\n", i, soma);
    }
}

void somaColunas(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < colunas; i++) {
        int soma = 0;
        for (int j = 0; j < linhas; j++) {
            soma += matriz[j][i];
        }
        printf("A soma da coluna %d: %d\n", i, soma);
    }
}

void maiorSomaLinha(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma, maior_linha;
    for (int i = 0; i < linhas; i++) {
        int temp = 0;
        for (int j = 0; j < colunas; j++) {
            temp += matriz[i][j];
        }
        if (i == 0) {
            soma = temp;
            maior_linha = i;
        }
        if(temp > soma) {
            soma = temp;
            maior_linha = i;
        }
    }
    printf("A linha com maior soma: %d\n", maior_linha);
}

void maiorSomaColuna(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma, maior_coluna;
    for (int i = 0; i < colunas; i++) {
        int temp = 0;
        for (int j = 0; j < linhas; j++) {
            temp += matriz[j][i];
        }
        if (i == 0) {
            soma = temp;
            maior_coluna = i;
        }
        if(temp > soma) {
            soma = temp;
            maior_coluna = i;
        }
    }
    printf("A coluna com maior soma: %d\n", maior_coluna);
}

void multiMatriz(int linhas_m1, int colunas_m1, int matriz_m1[linhas_m1][colunas_m1],
                int linhas_m2, int colunas_m2, int matriz_m2[linhas_m2][colunas_m2],
                int matriz_produto[linhas_m1][colunas_m2]) {  

    for (int i = 0; i < linhas_m1; i++) {
        for (int j = 0; j < colunas_m2; j++) {
            matriz_produto[i][j] = 0;
        }
    }

    for (int i = 0; i < linhas_m1; i++) {
        for (int j = 0; j < colunas_m2; j++) {
            for (int n = 0; n < colunas_m1; n++) {
                matriz_produto[i][j] += matriz_m1[i][n] * matriz_m2[n][j];
            }
        }
    }
}

void main() {
    int linhas_m1;
    int colunas_m1;
    printf("Matriz 1\n");
    alocarTamanhoMatriz(&linhas_m1, &colunas_m1);
    int matriz_m1[linhas_m1][colunas_m1];
    defElementosMatriz(linhas_m1, colunas_m1, matriz_m1);
    imprimirMatriz(linhas_m1, colunas_m1, matriz_m1);
    maiorLinha(linhas_m1, colunas_m1, matriz_m1);
    menorLinha(linhas_m1, colunas_m1, matriz_m1);
    maiorColuna(linhas_m1, colunas_m1, matriz_m1);
    menorColuna(linhas_m1, colunas_m1, matriz_m1);
    maiorElemento(linhas_m1, colunas_m1, matriz_m1);
    menorElemento(linhas_m1, colunas_m1, matriz_m1);
    somaLinhas(linhas_m1, colunas_m1, matriz_m1);
    somaColunas(linhas_m1, colunas_m1, matriz_m1);
    maiorSomaLinha(linhas_m1, colunas_m1, matriz_m1);
    maiorSomaColuna(linhas_m1, colunas_m1, matriz_m1);

    int linhas_m2;
    int colunas_m2;
    printf("Matriz 2\n");
    alocarTamanhoMatriz(&linhas_m2, &colunas_m2);
    int matriz_m2[linhas_m2][colunas_m2];
    defElementosMatriz(linhas_m2, colunas_m2, matriz_m2);
    imprimirMatriz(linhas_m2, colunas_m2, matriz_m2);

    int matriz_m3[linhas_m1][colunas_m2];

    if (colunas_m1 == linhas_m2) {
        multiMatriz(linhas_m1, colunas_m1, matriz_m1, linhas_m2, colunas_m2, matriz_m2, matriz_m3);
    }

    printf("Matriz 3 (produto)");
    imprimirMatriz(linhas_m1, colunas_m2, matriz_m3);
}
// Nome: Bruno Rangel Pereira Tadim, N°USP: 15444132, Turma: 104
// Nome: Higor Gabriel de Freitas, N°USP: 15575879, Turma: 104

#include <stdio.h>
#define TRUE 1
#define FALSE 0

// função para ordenar um vetor em ordem crescente
void ordena_vetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){          // iterando por todos os números do vetor
        for (int j = i; j < tamanho; j++){      // para cada número, itera sobre todos os restantes
            if (vetor[i] > vetor[j]){           // caso o número atual seja maior que o número que está sendo usado como comparação, inverte a posição de ambos
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main(){
    int vetor_1[20];            // vetor 1 com no máximo 20 elementos
    int vetor_2[20];            // vetor 2 com no máximo 20 elementos
    int vetor_3[40];            // o vetor 3 pode ter no máximo 40 elementos, considerando que os vetores 1 e 2 não possuam nenhum valor repetido
    int vetor_3temp[40];        // vetor 3 após correções de valores que podem ficar duplicados (devido a estarem repetidos nos próprios vetores 1 e 2)
    int vetor_4[20];            // o vetor 4 pode ter no máximo 20 elementos, considerando que os vetores 1 e 2 sejam idênticos
    int nums_1 = 0;             // variável que será utilizada para calcular o numero de elementos no vetor 1
    int nums_2 = 0;             // variável que será utilizada para calcular o numero de elementos no vetor 2
    int temp;                   // variável que temporariamente irá guardar os valores digitados pelo usuário
    int repetido;               // variável que irá verificiar se um valor é repetido ou não
    int contador_rep = 0;       // conta quantos numeros repetidos existem
    int contador_nao_rep = 0;   // conta quantos numeros nao repetidos existem

    // primeiro loop para inserção de valores no vetor 1
    for(int i = 0; i < 20; i++){
        printf("Digite o %d elemento do 1 vetor: ", (i+1));
        scanf("%d", &temp);
        if(temp < 0){
            break;
        }
        vetor_1[i] = temp;
        nums_1++;
    }

    // segundo loop para inserção de valores no vetor 2
    for(int i = 0; i < 20; i++){
        printf("Digite o %d elemento do 2 vetor: ", (i+1));
        scanf("%d", &temp);
        if(temp < 0){
            break;
        }
        vetor_2[i] = temp;
        nums_2++;
    }

    // ordenando em ordem crescente os valores dos vetores 1 e 2
    ordena_vetor(vetor_1, nums_1);
    ordena_vetor(vetor_2, nums_2);

    // inserindo os valores do vetor 1 no vetor 3
    for(int i = 0; i < nums_1; i++){    // iterando por todos os valores do vetor 1
        vetor_3[i] = vetor_1[i];        // adicionando cada um dos valores no vetor 3
    }

    // inserindo os valores não repetidos do vetor 2 no vetor 3 e os valores repetidos no vetor 4
    for(int i = 0; i < nums_2; i++){        // iterando entre todos os elementos do vetor 2
        repetido = FALSE;                   // inicializando a variável repetido como falso
        for(int j = 0; j < nums_1; j++){    // iterando entre todos os elementos do vetor 3
            if(vetor_2[i] == vetor_3[j]){   // verificando, para cada elemento do vetor 2, se há algum valor idêntico no vetor 3
                repetido = TRUE;            // caso haja, a variável repetido será verdadeira
            }
        }
        if (!repetido){
            vetor_3[nums_1+contador_nao_rep] = vetor_2[i];  // caso o numero não seja repetido entre os vetores ele será adicionado ao vetor 3
            contador_nao_rep++;
        }
        else{
            // este bloco abaixo verifica se o valor repetido já está contido no vetor 4, para não exibí-lo repetidas vezes
            repetido = FALSE;
            for(int k = 0; k <= contador_rep; k++){
                if(vetor_2[i] == vetor_4[k]){
                    repetido = TRUE;
                }
            }
            if (repetido == FALSE){
                vetor_4[contador_rep] = vetor_2[i];     // caso o numero seja repetido e ainda não esteja no vetor 4, ele será adicionado ao mesmo
                contador_rep++;
            }

        }
    }

    //Arrumando repetições no vetor_3 (retirando as repetições que haviam dentro dos vetores)
    int vetor_3_filtrado = 0;
        for(int i = 0; i < nums_1+contador_nao_rep; i++){       // iterando entre os valores do vetor 3
            int repetiu = FALSE;
            for(int j = i+1; j<nums_1+contador_nao_rep; j++){   // verificando os valores subsequentes do vetor
                if(vetor_3[i] == vetor_3[j]){
                repetiu = TRUE;
                }
            }
            if(repetiu==FALSE){                                 // garantindo que valores repetidos não serão exibidos no vetor_3temp
            vetor_3temp[vetor_3_filtrado] = vetor_3[i];
            vetor_3_filtrado++;
            }
            
        }

    ordena_vetor(vetor_3temp,vetor_3_filtrado);     // ordenando os valores do vetor 3 filtrado

    // printando os valores de cada vetor
    printf("Os valores do vetor 1, em ordem crescente, sao: ");
    for(int i = 0; i < nums_1; i++){
        printf("%d ", vetor_1[i]);
    }

    printf("\n");

    printf("Os valores do vetor 2, em ordem crescente, sao: ");
    for(int i = 0; i < nums_2; i++){
        printf("%d ", vetor_2[i]);
    }

    printf("\n");
    
    printf("Os valores do vetor 3, em ordem crescente, sao: ");    
    for(int i = 0; i < vetor_3_filtrado; i++){     // o número de elementos do vetor 3 filtrado é igual ao valor da variável vetor_3_filtrado, utilizada no loop de ajuste do vetor_3
        printf("%d ", vetor_3temp[i]);
    }

    printf("\n");

    printf("Os valores do vetor 4, em ordem crescente, sao: ");    
    for(int i = 0; i < contador_rep; i++){      // o número de elementos do vetor 4 é igual ao número de elementos repetidos
        printf("%d ", vetor_4[i]);
    }

    return 0;
}

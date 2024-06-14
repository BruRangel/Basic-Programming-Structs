#include <stdio.h>

void main(){
    char string_1[] = "Ativo";
    char string_2[] = "Atividade";
    int tamanho_maior_string;
    int primeira_string = 2;

    if (sizeof(string_1) > sizeof(string_2))
        tamanho_maior_string = sizeof(string_1)/sizeof(string_1[0]);
    else
        tamanho_maior_string = sizeof(string_2)/sizeof(string_2[0]);

    for (int i = 0; i < tamanho_maior_string; i++) {
        if (string_1[i] < string_2[i]) {
            primeira_string = 1;
            break;
        }
        if (string_1[i] > string_2[i])
            break;
    }

    if (primeira_string == 1) {
        for (int i = 0; i < sizeof(string_1)/sizeof(string_1[0]); i++) {
            printf("%c", string_1[i]);
        }
        printf("\n");
        for (int i = 0; i < sizeof(string_2)/sizeof(string_2[0]); i++) {
            printf("%c", string_2[i]);
        }
    }
    else {
        for (int i = 0; i < sizeof(string_2)/sizeof(string_2[0]); i++) {
            printf("%c", string_2[i]);
        }
        printf("\n");
        for (int i = 0; i < sizeof(string_1)/sizeof(string_1[0]); i++) {
            printf("%c", string_1[i]);
        }  
    }
}
#include <stdio.h>

int main() {
    int n, num, div_4 = 0, div_7 = 0, div_13 = 0;

    printf("Digite a quantidade de numeros a serem digitados: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &num);

        if (num % 4 == 0) {
            div_4++;
        }
        if (num % 7 == 0) {
            div_7++;
        }
        if (num % 13 == 0) {
            div_13++;
        }
    }

    printf("Quantidade de numeros divisiveis por 4: %d\n", div_4);
    printf("Quantidade de numeros divisiveis por 7: %d\n", div_7);
    printf("Quantidade de numeros divisiveis por 13: %d\n", div_13);

    return 0;
}

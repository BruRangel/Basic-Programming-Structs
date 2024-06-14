#include <stdio.h>

void altNumValue(int variable) {
    variable = 5;
}

void altNumReference(int *variable) {
    *variable = 5;
}

int createNum(){
    int z = 9;
    return z;
}

void main() {
    int x = 3;
    int *y = &x;

    altNumValue(x);

    printf("%d\n", x);

    // como foi possível observar, quando utilizamos a passagem por valor, a variável só é alterada dentro do escopo da função, e a variável original não é alterada

    altNumReference(y);

    printf("%d\n", x);

    // no entanto, na passagem por referência, por agirmos no endereço da variável original, seu valor é alterado

    int w = createNum();
    printf("%d", w);

}

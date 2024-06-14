#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("Insert the value of the first catetus: ");
    scanf("%lf", &A);

    printf("Insert the value of the wsecond catetus: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("The value of the hypotenuse is %.2lf", C);

    return 0;
}

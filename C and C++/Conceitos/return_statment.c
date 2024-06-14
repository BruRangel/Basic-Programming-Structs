#include <stdio.h>

double square(double x){
    // return = returns a value back to a calling function
    double result = x * x;
    return result;
}

int main() {
    double num;
    printf("Type a num: ");
    scanf("%lf", &num);
    printf("Num is %lf\n", num);

    double num2 = square(num);
    printf("Pow is %lf", num2);

    return 0;
}

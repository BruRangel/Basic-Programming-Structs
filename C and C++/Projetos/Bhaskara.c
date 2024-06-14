#include <math.h>
#include <stdio.h>

float a;
float b;
float c;
float delta;
char do_again;
float x1;
float x2;

int main(){
do{
    do{
        a = printf("Enter the value of a: \n");
        if (scanf("%f", &a) != 1){
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        b = printf("Enter the value of b: \n");
        if (scanf("%f", &b) != 1){
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        c = printf("Enter the value of c: \n");
        if (scanf("%f", &c) != 1){
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        delta = pow(b, 2) - 4*a*c;
        if (a == 0) {
            printf("a can't be equal 0\n");
        }

        if (delta < 0) {
            printf("delta can't be less than 0\n");
        }

    } while (a == 0 || delta < 0);

    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    printf("The roots of the equation are %.2f and %.2f\n", x1, x2);
    printf("Do you wanna use the program again (Y/N)? \n");
    scanf(" %c", &do_again);

    } while (do_again == 'Y' || do_again == 'y');

return 0;
}

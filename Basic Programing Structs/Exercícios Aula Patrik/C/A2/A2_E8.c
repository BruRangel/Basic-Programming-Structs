#include <stdio.h>
#include <math.h>

float a; float b;

int main(){
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    int x = round(pow((a/b), 2));
    printf("The integer value of the square of the division of %.0f by %.0f is %d.", a, b, x);

    return 0;
}
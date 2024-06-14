#include <stdio.h>

int main() {

    // array = a data structure that can store many values of the same data type.
    
    double prices[5] = {5.0, 10.0, 15.0, 20.0, 25.0};

    char name[] = "Bruno";

    printf("R$ %.2lf\n", prices[0]);
    printf("%c\n", name[0]);

    return 0;
}

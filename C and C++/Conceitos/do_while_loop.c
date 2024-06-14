#include <stdio.h>
#include <string.h>


int main() {

    // while loop = checks a condition, and if it's true, executes a block o code
    // do while loop = always execute a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0){
            sum += number;
        }
    }while(number > 0);

    printf("sum: %d", sum);

    return 0;
}

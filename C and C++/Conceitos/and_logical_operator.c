#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    /*
    logical operators
        && (AND) checks if two conditions are true
        || (OR) checks if at least one condition is true
        ! (NOT) reverses the state of a condition
    */ 

    float temp;
    printf("Type the temperature (celsius): ");
    scanf("%f", &temp);

    bool sunny = false;

    if(temp >= 16 && temp <= 24 && sunny) {
        printf("The temperature and the weather is good!\n");
    }
    else if(temp >= 16 && temp <= 24 && sunny != true) {
        printf("The temperature is good but the weather is bad!\n");
    }
    else if (temp < 16 || temp > 24 && sunny) {
        printf("The temperature is bad but the weather is good!\n");
    }
    else {
        printf("Everything is bad!");
    }

    return 0;
}

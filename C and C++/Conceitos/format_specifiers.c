#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field widht
    // %-1 = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 15.25;

    printf("Item 1: $%.2f, Item 2: $%.2f, Item 3: $%.2f", item1, item2, item3);

    return 0;
}

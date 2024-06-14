#include <stdio.h>

int main()
{
    /*
    memory = an array of bytes within RAM (street)
    memory block = a single unit (byte) within memory, used to hold some value (house with a person)
    memory address = the address of where a memory block is located (house address)
    */

    char a = 'X';    // a = address, X = block(value)
    short b = 'Y';
    int c = 'Z';

    printf("a is %d bytes, b is %d bytes, c is %d bytes\n", sizeof(a), sizeof(b), sizeof(c));

    printf("address of a is %p, address of b is %p, address of c is %p\n", &a, &b, &c);

    printf("// ------------------------------------------------------------------------------------------------- //\n");

    char t1;
    double t2[25];

    printf("%d bytes in t1\n", sizeof(t1));
    printf("%d bytes in t2\n", sizeof(t2));

    return 0;
}
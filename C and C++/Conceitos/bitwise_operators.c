#include <stdio.h>

int main()
{
    /*
    BITWISE OPERATORS = special operators used in bit level programing (knowing binary is important for this topic)
    & = AND
    | = OR
    ^ = XOR     (Exclusive OR)
    << = left shift
    >> = right shift
    */

   int x = 6;   // 00000110
   int y = 12;  // 00001100
   int z1 = 0;   // 00000000
   int z2 = 0;
   int z3 = 0;
   int z4 = 0;
   int z5 = 0;

   z1 = x & y;   // this works like and intersection
                // x = 00000110 (6)
                // y = 00001100 (12)
                // z = 00000100 (intersection = 4)

   z2 = x | y;  // this works like and union
                // x = 00000110 (6)
                // y = 00001100 (12)
                // z = 00001110 (14)

   z3 = x ^ y;   // this works like and union, but if both sets have the same element, it will be displayed as 0
                // x = 00000110 (6)
                // y = 00001100 (12)
                // z = 00001010 (10)   

   z4 = x << 1;     // shift bits one spot to the left, filling the blank space with 0 (double the number)
                    // x = 00000110 (6)
                    // z = 00001100 (12)   

   z5 = x >> 1;     // shift bits one spot to the right, filling the blank space with 0 (divides the number by 2)
                    // x = 00000110 (6)
                    // z = 00000011 (3)   

    printf("z1 = (x AND y) = %d\n", z1);
    printf("z2 = (x OR y) = %d\n", z2);
    printf("z3 = (x XOR y) = %d\n", z3);    
    printf("z4 = (x << y) = %d\n", z4); 
    printf("z5 = (x >> y) = %d\n", z5);     

    return 0;
}
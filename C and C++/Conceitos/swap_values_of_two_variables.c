#include <stdio.h>
#include <string.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

//-------------------------------------------------//

    char a[20] = "water";
    char b[20] = "coca";
    char temp2[20];
                            // Remember to specify the lenght of the array, because if lenght of a is different than lenght of b, some problems may occur
    strcpy(temp2, a);
    strcpy(a, b);
    strcpy(b, temp2);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

//-------------------------------------------------//

    return 0;

}
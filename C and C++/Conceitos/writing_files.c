#include <stdio.h>

int main()
{
    /*
    FILE *pF = fopen("writetest.txt", "a");

    fprintf(pF, "\nPatrick Star");

    fclose(pF);

    return 0;
    */

    /*
    if(remove("writetest.txt") == 0)
    {
        printf("That file was deleted successfuly!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }
    */

   FILE *pF1 = fopen("C:\\Users\\Bruno\\Desktop\\desktest.txt", "w");

   fprintf(pF1, "Creating a file on the desktop with C.");

   fclose(pF1);

}

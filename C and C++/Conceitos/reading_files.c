#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\Bruno\\Desktop\\desktoC.txt", "r");

    char buffer[300];

    if(pF == NULL)
    {
        printf("Unable to open file.");
    }
    else
    {
        while(fgets(buffer, 300, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}
#include <stdio.h>
#include <string.h>

void sort_int(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1]) // if you want to sort on inverse order, just change from ">" to "<"
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array_int(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sort_char(char array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1]) // if you want to sort on inverse order, just change from ">" to "<"
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array_char(char array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array_int[] = {9, 1, 4, 6, 5, 3, 2, 1};
    int size_int = sizeof(array_int)/sizeof(array_int[0]);

    sort_int(array_int, size_int);
    print_array_int(array_int, size_int);

    // ------------------------------------------ //

    char array_char[] = {'A', 'D', 'B', 'K', 'C', 'X'};
    int size_char = sizeof(array_char)/sizeof(array_char[0]);

    sort_char(array_char, size_char);
    print_array_char(array_char, size_char);

    return 0;
}
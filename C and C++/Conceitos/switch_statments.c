#include <stdio.h>

int main(){
    // switch = a more efficient way of using "else if" statments
    // allows a value to be tested for equality many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
        {
        case 'A':
            printf("Perfect!\n");
            break;
    
        case 'B':
            printf("Good!\n");
            break;

        case 'C':
            printf("Ok!\n");
            break;

        case 'D':
            printf("Bad!\n");
            break;

        case 'E':
            printf("Very Bad!\n");
            break;
        
        default:
            printf("Please enter only valid grades (A, B, C, D or E)\n");
        }

    return 0;
}

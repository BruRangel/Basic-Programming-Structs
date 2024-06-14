#include <stdio.h>

# define TRUE 1
# define FALSE 0

int main() {
    int pos, x;
    pos = FALSE;

    for(int i = 1; i <= 10; i++){
        printf("Enter with de %d of 10 elements: ", i);
        scanf("%d", &x);
        if(x > 0){
            pos = TRUE;
        }
    }

    if (pos == FALSE){
        printf("All elements equal or less than 0\n");
    }
    else{
        printf("At least one element greater than 0\n");
    }
// On this code, the variable "pos" is a passage indicator, utilized to indicate the existence or not of terms greater than 0.
    return 0;
}
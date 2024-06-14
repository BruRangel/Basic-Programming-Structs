#include <stdio.h>

int main(){
    char name[5] = {'B', 'R', 'U', 'N', 'O'};
    for (int i = 0; i <= sizeof(name); i++){
        printf("%c\n", name[i]);
    }

// The char name is a array with 6 positions, with the last being occuped by the \0 (array finalizer). 
// The first position is 0 and the last is 5.

    return 0;
}

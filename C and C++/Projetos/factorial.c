#include <stdio.h>

long long factorial_function(int factoring){
    long long factorial = 1;
    for (int i = 1 ; i <= factoring ; i++){
        factorial *= i;
    }
    printf("%d! = %lld", factoring, factorial);
}

int main(){
    int fnumber;
    printf("Enter the number to be factored: \n");
    scanf("%d", &fnumber);
    factorial_function(fnumber);
}

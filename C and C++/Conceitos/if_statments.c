#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You're of legal age.");
    }
    else if(age < 0){
        printf("You haven't been born yet.");
    }
    else{
        printf("You're a minor.");
    }

    return 0;
}

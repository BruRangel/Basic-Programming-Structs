#include <stdio.h>
#include <string.h>

void test(char x[], int y){
    printf("My name is %s. I'm %d years old!", x, y);

}

int main(){
    char name[25];
    int age;

    printf("What's your name? ");
    scanf("%s", &name);
    printf("How old are you?");
    scanf("%d", &age);

    test(name, age);
}

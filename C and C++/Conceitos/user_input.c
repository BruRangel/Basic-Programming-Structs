#include <stdio.h>
#include <string.h>

int main() {
    char name[25];
    int age;
    char color[25];
    float height;

    // Name input
        printf("What's your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name)-1]= '\0'; // removes the new line of fgets()

        printf("Your name is %s\n", name);

    // Age input
        printf("How old are you?\n");
        scanf("%d", &age);
        printf("You are %d years old.\n", age);

    getchar(); // Clears the buffer before a new input

    // Favorite color input
        printf("What's your favorite color?\n");
        fgets(color, 25, stdin);
        color[strlen(color)-1]= '\0'; // removes the new line of fgets()

    // Height input
        printf("How tall are you?\n");
        scanf("%f", &height);

        printf("Your favorite color is %s and you're %.2f meters tall.", color, height);

    return 0;
}

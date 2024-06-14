#include <stdio.h>
#include <ctype.h>

int main()
{

    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie","B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char awnsers[3] = {'B', 'A', 'B'};
    
    int num_of_questions = sizeof(awnsers)/sizeof(awnsers[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i < num_of_questions; i++)
    {
        printf("%s\n", questions[i]);
        printf("**********************\n");
        
        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

    printf("guess: ");
    scanf("%c", &guess);
    getchar();
    guess = toupper(guess);

    if(guess == awnsers[i])
    {
        score++;
        printf("Correct awnser!\n");
    }
    else
    {
        printf("Wrong awnser!\n");
    }

    }

    switch (score)
    {
    case 0:
        printf("\nYour final score is: %d. How bad...", score);
        break;
    
    case 1:
        printf("\nYour final score is: %d. Bad...", score);
        break;

    case 2:
        printf("\nYour final score is: %d. Good.", score);
        break;

    case 3:
        printf("\nYour final score is: %d. Awesome!", score);
        break;
    }

    return 0;
}

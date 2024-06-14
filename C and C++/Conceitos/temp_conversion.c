#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    double celsius;
    double fahrenheit;
    double kelvin;
    double temp;
    char original[25];
    
    printf("What type of temperature you wanna convert? "); // Getting user input of the type of temperatura that will be converted
    scanf("%s", &original);
        for(int i = 0; original[i] != '\0'; i++) { // Transforms the string in all lowercase
            original[i] = tolower(original[i]);
        }

    printf("Type the value of the temperature: ");
    if (scanf("%lf", &temp) != 1) { // Verifies if the reading was sucessfull (if it's not equal to 1)
        printf("The value typed is not a number.");
        return 1; // Finishes the program dues to error
    }

// Codes of conversion:

        if(strcmp(original, "celsius") == 0) {
            celsius = temp;
            fahrenheit = ((1.8 * celsius) + 32);
            kelvin = celsius + 273;
            printf("Celsius: %.2lf, Fahrenheit: %.2lf, Kelvin: %.2lf", celsius, fahrenheit, kelvin);
        }
        else if(strcmp(original, "fahrenheit") == 0) {
            fahrenheit = temp;
            celsius = 0.5555 * (fahrenheit - 32);
            kelvin = celsius + 273;
            printf("Celsius: %.2lf, Fahrenheit: %.2lf, Kelvin: %.2lf", celsius, fahrenheit, kelvin);
        }
        else if(strcmp(original, "kelvin") == 0) {
            kelvin = temp;
            celsius = kelvin - 273;
            fahrenheit = ((1.8 * celsius) + 32);
            printf("Celsius: %.2lf, Fahrenheit: %.2lf, Kelvin: %.2lf", celsius, fahrenheit, kelvin);
        }
        else {
            printf("Temperature format not supported");
        }
    
    return 0;
    }

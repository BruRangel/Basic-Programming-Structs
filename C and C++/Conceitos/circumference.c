#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The perimeter of the circumference is %.2lf, and the area is %.2lf", circumference, area);

    return 0;
}

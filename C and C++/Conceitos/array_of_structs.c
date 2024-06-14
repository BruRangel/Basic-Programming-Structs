#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    float gpa;
} Student;

int main()
{
    Student student1 = {"Bruno", 3.0};
    Student student2 = {"Onurb", 6.0};
    Student student3 = {"Rboun", 4.0};
    Student student4 = {"Norub", 5.0};

    Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("name: %s, gpa: %f\n", students[i].name, students[i].gpa);
    }

    return 0;
}
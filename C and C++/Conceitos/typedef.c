#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[25];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    /*
    What I would have to type:
    char user1[25] = "Bruno";

    What a will type:
    user user1 = "Bruno";
    */

    User user1 = {"Bruno", "password1", 123456};
    User user2 = {"Onurb", "password2", 654321};

    printf("%s, %s, %d\n", user1.name, user1.password, user1.id);
    printf("%s, %s, %d\n", user2.name, user2.password, user2.id);    

    return 0;
}
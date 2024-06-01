/*
    Description about data type:
    There are two types of Data types:
    1. Basic/built-in data types: int, float, double, char, void
    2. Derived data types: arrays, unions, pointers, enum, struct
*/

/*#include<stdio.h>

int main()
{
    struct Person{
        char name[50];
        int age;
    };

    //return 0;
    getch();
}
*/

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name : \n");
    fgets(name, sizeof(name), stdin);
    //gets(name);

    size_t len = strlen(name);
    if (name[len -1] = '\n') {
        name[len -1] = '\0';
    }

    printf("Hello ");
    puts(name);

    getch();
}

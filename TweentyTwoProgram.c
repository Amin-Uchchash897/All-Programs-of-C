// Write a program to convert Upper to Lowercase Letter.

#include<stdio.h>

int main()
{
    char upper_case;

    printf("Please Enter a Upper Case Letter : \n"); // A = 65;
    scanf("%c", &upper_case);

    printf("So the Lower Case Letter is: %c\n", upper_case + 32); // a = 97;

    return 0;
}

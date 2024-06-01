// Write a program to convert upper to lowercase letter with library function.

#include<stdio.h>

int main()
{
    char upper_case, lower_case;

    printf("Please Enter a Upper Case Character : \n");
    scanf("%c", &upper_case);

    lower_case = tolower(upper_case);

    printf("So the Lower case Character is: %c\n", lower_case);

    //return 0;
    getchar();
}

// Write a program to convert lower to uppercase letter with library function.

#include<stdio.h>

int main()
{
    char lower_case, upper_case;

    printf("Please Enter a Lower case character : \n");
    scanf("%c", &lower_case);

    upper_case = toupper(lower_case);

    printf("So the Upper Case Letter is : %c\n", upper_case);

    //return 0;
    getchar();
}

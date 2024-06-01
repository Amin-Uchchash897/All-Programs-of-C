//Write a program to print summation of two numbers.

#include<stdio.h>

int main()
{
    int number1 = 10, number2 = 20, addition, subtraction, multiplication, division, remainder;

    addition = number1 + number2;
    subtraction = number2 - number1;
    multiplication = number1 * number2;
    division = number1 / number2;
    remainder = number1 % number2;

    printf("The Two Numbers are:\n%d & %d\n\n", number1, number2);
    printf("The Addition of Two Numbers : %d\n", addition);
    printf("The Subtraction of Two Numbers : %d\n", subtraction);
    printf("The Multiplication of Two Numbers : %d\n", multiplication);
    printf("The Division of Two Numbers : %d\n", division);
    printf("The Remainder of Two Numbers : %d\n", remainder);

    //return 0;
    getch();
}

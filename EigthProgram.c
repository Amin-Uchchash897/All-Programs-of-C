//Write a Program to find out sum of two numbers.

#include<stdio.h>

int main()
{
    int number1, number2;
    int sum;

    printf("Please Enter two numbers : \n");
    scanf("%d%d", &number1, &number2);

    sum = number1 + number2;

    printf("So the Summation Of Two Numbers : %d\n", sum);

    //return 0;
    getch();
}

//Write a Program to reverse a Number.

#include<stdio.h>

int main()
{
    int number, remainder, reverseNumber = 0;

    printf("Please Enter a Number : \n");
    scanf("%d", &number);

    while(number != 0){
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }
    printf("So the Reversed Number is : %d\n", reverseNumber);

    //return 0;
    getch();
}

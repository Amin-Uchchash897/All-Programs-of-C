//Write a program to convert Celsius to Fahrenheit.

#include<stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Please Enter a Celsius Value : \n");
    scanf("%f", &celsius);
    fahrenheit = (1.8*celsius) + 32;
    printf("Fahrenheit = %f\n", fahrenheit);

    //return 0;
    getch();
}

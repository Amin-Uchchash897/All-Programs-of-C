//Write a Program to find Area of Circle.
//Area = Pie * Radius * Radius

#include<stdio.h>

int main()
{
    float Pie = 3.1416, Radius;
    float Area;

    printf("Please Enter the value of Pie & Radius: \n");
    scanf("%f", &Radius);

    Area = Pie * Radius * Radius;

    printf("So The Area of Circle : %.1f\n", Area);

    //return 0;
    getch();
}

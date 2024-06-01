//Write a program to measure the size of different types of variable.

#include<stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int : %d bytes\n", sizeof(i));
    printf("Size of float : %d bytes\n", sizeof(f));
    printf("Size of double : %d bytes\n", sizeof(d));
    printf("Size of character : %d bytes\n", sizeof(c));

    //return 0;
    getch();
}

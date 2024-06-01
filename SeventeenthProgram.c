#include<stdio.h>

int main()
{
    char character;

    printf("Enter any character : \n");
    //scanf("%c", &character);
    character = getchar();

    //printf("You entered : %c\n", character);
    printf("You entered: ");
    putchar(character);

    getch();
}

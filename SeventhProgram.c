//Write a program to calculate percentage of 5 subjects.

#include<stdio.h>

int main()
{
    int Bangla, English, Mathematics, ICT, Science;
    int total, Average;

    printf("Please Enter the Numbers: \n");
    scanf("%d%d%d%d%d", &Bangla, &English, &Mathematics, &ICT, &Science);

    total = Bangla + English + Mathematics + ICT + Science;
    Average = total / 5;

    printf("So the Average of Five Numbers are: %d\n", Average);

    //return 0;
    getch();
}

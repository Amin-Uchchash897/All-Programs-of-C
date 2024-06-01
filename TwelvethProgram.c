//Write a program to get Average and Total Marks of a student.

#include<stdio.h>

int main()
{
    float Bangla, English, Mathematics, ICT, Science;
    float total, Average;

    printf("Please Enter the marks: \n");
    scanf("%f%f%f%f%f", &Bangla, &English, &Mathematics, &ICT, &Science);

    total = Bangla + English + Mathematics + ICT + Science;
    Average = total/5.0;

    printf("Total Marks of Five Subjects = %.2f\n", total);
    printf("Average Marks of Five Subjects = %.2f\n", Average);

    return 0;
}

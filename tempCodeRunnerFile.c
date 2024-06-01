// User verification.
// #define _UNICODE
// #define UNICODE

#include <stdio.h>

int main()
{
    char userName[20];
    char pwd[10];

    printf("Please enter your user name : \n");
    scanf("%s", &userName);
    printf("Please enter your password : \n");
    scanf("%d", &pwd);
    printf("Registered successfully.");
    printf("\n\n=========================================================================================\n");
    printf("\n\t\t\tWELCOME TO ONLINE BUS RESERVATION");
    printf("\n\n=========================================================================================\n\n");
    printf("=========================================================================================");
    printf("\nBus No.\t\tName\t\t\tDestinations  \t\tCharges  \tTime\n");
    printf("=========================================================================================");
    printf("\n1\t\tGangaTravels         \tDharan to Kavre       \tRs.70   \t07:00  AM");
    printf("\n2\t\tPhaphara Travels     \tKavre To Dharan       \tRs.55    \t01:30  PM");
    printf("\n3\t\tShiv Ganga Travels   \tAllahabad To Gorakhpur\tRs.40    \t03:50  PM");
    printf("\n4\t\tSuper Deluxe         \tPokhara To Benigha    \tRs.70    \t01:00  AM");
    printf("\n5\t\tSai Baba Travels     \tMaitidevi To Janakpur \tRs.55    \t12:05  AM");
    printf("\n6\t\tShine On Travels     \tMadhubani to Patna    \tRs.40    \t09:30  AM");
    printf("\n7\t\tMayur Travels        \tPatna To Gaya         \tRs.70   \t11:00  PM");
    printf("\n8\t\tRajjo Travels       \tBegusarai To Patna     \tRs.55    \t08:15  AM");
    printf("\n9\t\tShree Travels        \tGaya To Chhapra       \tRs.40    \t04:00  PM");

    return 0;
}
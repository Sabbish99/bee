#include<stdio.h>
int main()

{
    int totalDays, years, months, days;
    scanf("%d",&totalDays);

    years = totalDays/365;

    months = (totalDays%365)/30;

    days = ((totalDays%365)%30);

    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
}

#include<stdio.h>
int main()
{
    int N, Hours, Minutes, Seconds;
    scanf("%d",&N);

    Hours = N/3600;
    Minutes = ((N%3600)/60);
    Seconds = (((N%3600)%60)%60);
    printf("%d:%d:%d\n",Hours,Minutes,Seconds);
    return 0;
}

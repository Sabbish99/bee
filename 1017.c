#include<stdio.h>
int main()
{
    float hour,km,div,mul;

    scanf("%f",&hour);
    scanf("%f",&km);

    div = km / 12;
    mul = div * hour;

    printf("%0.3f\n",mul);

    return 0;

}

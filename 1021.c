#include<stdio.h>
int main()
{
    double note, Hundred, Fifty, Twenty, Ten, Five, Two, One, FiftyPoysa, TwentyFivePoysa,TwentyPoysa, TenPoysa, FivePoysa,OnePoysa;
    scanf("%lf",&note);
    printf("NOTAS:\n");

    Hundred = note/100;
    printf("%lf nota(s) de R$ 100.00\n",Hundred);

    Fifty = (note%100)/50;
    printf("%lf nota(s) de R$ 50.00\n",Fifty);

    Twenty = ((note%100)%50)/20;
    printf("%lf nota(s) de R$ 20.00\n",Twenty);

    Ten = (((note%100)%50)%20)/10;
    printf("%lf nota(s) de R$ 10.00\n",Ten);

    Five = ((((note%100)%50)%20)%10)/5;
    printf("%lf nota(s) de R$ 5.00\n",Five);

    Two = (((((note%100)%50)%20)%10)%5)/2;
    printf("%lf nota(s) de R$ 2.00\n",Two);

    printf("MOEDAS:\n");

    One = ((((((note%100)%50)%20)%10)%5)%2)/1;
    printf("%lf moeda(s) de R$ 1.00\n",One);

    FiftyPoysa = (((((((note%100)%50)%20)%10)%5)%2)%1)/(1/2);
    printf("%lf moeda(s) de R$ 0.50\n",FiftyPoysa);

    TwentyFivePoysa = ((((((((note%100)%50)%20)%10)%5)%2)%1)%(1/2))/(1/4);
    printf("%lf moeda(s) de R$ 0.25\n",TwentyFivePoysa);

    TenPoysa = (((((((((note%100)%50)%20)%10)%5)%2)%1)%(1/2))%(1/4))/(1/10);
    printf("%lf moeda(s) de R$ 0.10\n",TenPoysa);

    FivePoysa = ((((((((((note%100)%50)%20)%10)%5)%2)%1)%(1/2))%(1/4))%(1/10))/(1/20);
    printf("%lf moeda(s) de R$ 0.05\n",FivePoysa);

    OnePoysa = (((((((((((note%100)%50)%20)%10)%5)%2)%1)%(1/2))%(1/4))%(1/10))%(1/20))/(1/100);
    printf("%lf moeda(s) de R$ 0.01\n",OnePoysa);




}

/*

In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.


Input Sample	Output Sample
576                    576
                    5 nota(s) de R$ 100,00
                    1 nota(s) de R$ 50,00
                    1 nota(s) de R$ 20,00
                    0 nota(s) de R$ 10,00
                    1 nota(s) de R$ 5,00
                    0 nota(s) de R$ 2,00
                    1 nota(s) de R$ 1,00
*/
#include<stdio.h>
int main()
{
    int note,Hundred, Fifty, Twenty, Ten, Five, Two, One;
    scanf("%d",&note);
    printf("%d\n",note);

    Hundred = note/100;
    printf("%d nota(s) de R$ 100,00\n",Hundred);

    Fifty = (note%100)/50;
    printf("%d nota(s) de R$ 50,00\n",Fifty);

    Twenty = ((note%100)%50)/20;
    printf("%d nota(s) de R$ 20,00\n",Twenty);

    Ten = (((note%100)%50)%20)/10;
    printf("%d nota(s) de R$ 10,00\n",Ten);

    Five = ((((note%100)%50)%20)%10)/5;
    printf("%d nota(s) de R$ 5,00\n",Five);

    Two = (((((note%100)%50)%20)%10)%5)/2;
    printf("%d nota(s) de R$ 2,00\n",Two);

    One = ((((((note%100)%50)%20)%10)%5)%2)/1;
    printf("%d nota(s) de R$ 1,00\n",One);



}

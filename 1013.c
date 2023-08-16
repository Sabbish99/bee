/*Make a program that reads 3 integer values and present the greatest one followed by the message
 "eh o maior". Use the following formula:
Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	Output Samples
7 14 106

106 eh o maior

217 14 6

217 eh o maior*/


#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A>B){
        if(A>C){
            printf("%d eh o maior",A);
        }
        else{
            printf("%d eh o maior",C);
        }
    }
    else{
        if(B>C){
            printf("%d eh o maior",B);
        }
        else{
              printf("%d eh o maior",C);
        }
    }
    return 0;
}



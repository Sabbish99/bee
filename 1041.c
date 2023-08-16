#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);

    if(X>0 && Y>0){
        printf("Q1\n");
    }
    else if(0>X && Y>0){
        printf("Q2\n");
    }
    else if(0>X && 0>Y){
        printf("Q3\n");
    }
    else if(X>0 && 0>Y){
        printf("Q4\n");
    }
    else {
        printf("Origem\n");
    }
}

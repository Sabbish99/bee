#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    if(N>5 && N<2000){
        for(i=1;i<=N;i++){
        if(i%2==0){
            printf("%d*%d = %d\n",i,i,i*i);
        }
    }

    }
}


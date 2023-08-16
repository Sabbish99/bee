#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int X[100000];


    for(int i=0;i<N;i++){
        scanf("%lld",&X[i]);
    }
    for(int i=0;i<N;i++){

        if(X[i]%2==0 && X[i]>0){
            printf("EVEN POSITIVE\n");
        }
        else if(X[i]%2==0 && X[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(X[i]%2!=0 && X[i]>0){
            printf("ODD POSITIVE\n");
        }
        else if( X[i]%2!=0 && 0>X[i]){
            printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");
        }

    }
    return  0;

}
//accepted

#include<stdio.h>
int main()
{
    float N[6],sum=0,avg;
    int i,c=0;

    for(i=0;i<6;i++){
        scanf("%f",&N[i]);
    }

    for(i=0;i<6;i++){
        if(N[i]>0){
            c++;
            sum+=N[i];
    }
    }
        avg= sum/c;

    printf("%d valores positivos\n",c);
    printf("%0.1f\n",avg);
}

//accepted

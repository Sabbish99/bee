#include<stdio.h>
int main()
{

    int arr[6],i,c=0;
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++){
        if(arr[i]>0){
            c++;
        }
    }
    printf("%d valores positivos\n",c);
}

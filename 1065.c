#include <stdio.h>
int main() {

    int i,A[5],count=0;
    for(i=1;i<=5;i++){
        scanf("%d",&A[i]);
    }

    for(i=1;i<=5;i++){
        if(A[i]%2==0){
            count++;
        }
    }
    printf("%d valores pares\n",count);

    return 0;
}

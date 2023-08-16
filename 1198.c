#include<stdio.h>
int main()
{
    int A,B,/*C,D,E,F,*/X/*,Y,Z*/;
    scanf("%d%d",&A,&B);
    //scanf("%d%d",&C,&D);
    //scanf("%d%d",&E,&F);

    X = B-A;
   // Y = D-C;
    //Z = F-E;

    if(X<0){
         printf("%d\n",X*-1);
    }
    else{
         printf("%d\n",X);
    }
    /*printf("%d\n",X);
    printf("%d\n",Y);
    printf("%d\n",Z);
*/
    return 0;
}

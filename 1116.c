#include<stdio.h>
int main()
{
    int n,a,b;
    float c;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>0 || a<0 && b>0 || b<0){
            c = a/b;
            printf("%f",c);
        }
    }
}


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a,b,c,d,e;

    for(int i=0;i<n;i++){
            scanf("%f %f %f",&a,&b,&c);
            d=a+b+c;
            e = d/3;
            printf("%.1f\n",e);

    }

}

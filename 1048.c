#include<stdio.h>
int main()
{
    float N,A,B;
    scanf("%f",&N);

    if(N>=0 && N<=400.00){
        A = N+((N/100)*15);
        B = A-N;

        printf("Novo salario: %0.2f\n",A);
        printf("Reajuste ganho: %0.2f\n",B);
        printf("Em percentual: 15 %%\n");
    }
    else if(N>400 && N<=800.00){
        A = N+((N/100)*12);
        B = A-N;

        printf("Novo salario: %0.2f\n",A);
        printf("Reajuste ganho: %0.2f\n",B);
        printf("Em percentual: 12 %%\n");
    }
    else if(N>800 && N<=1200.00){
        A = N+((N/100)*10);
        B = A-N;

        printf("Novo salario: %0.2f\n",A);
        printf("Reajuste ganho: %0.2f\n",B);
        printf("Em percentual: 10 %%\n");
    }
    else if(N>1200 && N<=2000.00){
        A = N+((N/100)*7);
        B = A-N;

        printf("Novo salario: %0.2f\n",A);
        printf("Reajuste ganho: %0.2f\n",B);
        printf("Em percentual: 7 %%\n");
    }
    if(N>2000){
        A = N+((N/100)*4);
        B = A-N;

        printf("Novo salario: %0.2f\n",A);
        printf("Reajuste ganho: %0.2f\n",B);
        printf("Em percentual: 4 %%\n");
    }

}

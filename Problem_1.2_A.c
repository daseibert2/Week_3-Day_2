#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n,sum=0;
    for(n=10000;n>1;n--)
    {
        sum+=1/(n*n);
    }

    printf("Sum of series 1/(n^2) from 10000 to 1: %.20lf\n",sum);

    return 0;
}

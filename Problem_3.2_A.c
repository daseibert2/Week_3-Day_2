#include <stdio.h>
#include <math.h>

int main()
{
    double sum=0.0;
    double c=0.0;
    //double y,t;
    for(double n=1;n<=10000;n++)
    {
        double t=sum;
        double y=n+c;
        sum=t+(1/(n*n));
        c=(t-sum)+y;
    }
    printf("\nSum of 1/n^2 from 1 to 10000:\t%.20lf\n",sum);

    return 0;
}

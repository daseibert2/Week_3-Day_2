#include <stdio.h>
#include <math.h>

int main()
{
    printf("Problem 1.3\n\n");

    double dt=0.01;
    int size=4*M_PI/dt;
    double O[size];
    O[0]=0.1;
    double B=1.0;
    double u=2.0;
    double n[size];
    n[0]=0.0;
    double t=0.0;
    int count=1;

    printf("O(%2.2f):  %f\tn(%2.2f):  %f\n\n",t,O[count],t,n[count]);

    for(t=dt;t<(4*M_PI);t+=dt)
    {
        O[count]=(n[count-1]*dt)+O[count-1];
        n[count]=((-(1+B*cos(u*t))*sin(O[count]))*dt)+n[count-1];


        printf("O(%2.2f):  %f\tn(%2.2f):  %f\n\n",t,O[count],t,n[count]);

        count++;
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    char fname[20]="10000.dat";
    int line[10000];
    FILE *fptr=NULL;
    int i=0,sum=0;;
    int a=1,b=1;
    fptr=fopen(fname,"r");
    while(!feof(fptr))
    {
        fscanf(fptr,"%d",&line[i++]);
    }
    for(i=0;i<10000;i++)
    {
        line[i]=a*line[i]+b;
        sum+=line[i];
    }
    fclose(fptr);
    printf("\nSum:\t%d\n",sum);

    long long x,total=0,first=line[0],second=line[1],num=50;
    long long F[num];
    F[0]=first;
    F[1]=second;

    for(i=3;i<=num;i++)
    {
        x=first+second;
        first=second;
        second=x;
        F[i]=x;
    }
    printf("\n50th Fibonacci Number:\t%lli\n",F[num]);


    long long fact=1;
    for(i=1;i<=15;i++)
    {
        fact*=i;
    }
    printf("\n15 Factorial:\t%lli\n",fact);

    return 0;
}

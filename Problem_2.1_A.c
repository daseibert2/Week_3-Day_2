#include <stdio.h>
#include <math.h>

int main()
{
   float num=0.0,output=0.0,error=0.0;
   printf("Problem 2.1\n\n");

   printf("Input number to be rounded: ");
   scanf("%f",&num);
    printf("\nOriginal Number:\t%f",num);
   output=round(num*100)/100;

    printf("\n\nRounded Number:\t\t%.2f",output);

    if(num>output)
        {
            error=num-output;
        }
        else
        {
            error=output-num;
        }
    printf("\n\nError:\t\t\t%f\n",error);

    return 0;
}

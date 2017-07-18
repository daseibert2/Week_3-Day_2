#include <stdio.h>
#include <math.h>

int main()
{

   float num=0.0,output=0.0,error=0.0;
   int roundnum=0,ten=10;
   printf("Problem 2.2\n\n");

   //printf("Input number to be rounded: ");
   //scanf("%f",&num);

   printf("\nInput number of decimal places to round to: ");
   scanf("%d",&roundnum);


    //printf("\nOriginal Number:\t%f",num);
    //output=roundf(num*(pow(ten,roundnum)))/pow(ten,roundnum);

    //printf("\n\nRounded Number:\t\t%.*f\n",roundnum,output);

    /*if(num>output)
        {
            error=num-output;
        }
        else
        {
            error=output-num;
        }
    printf("\n\nError:\t\t\t%f\n",error);*/
    double cox1=0.1036;
    double cox2=0.2081;

    double coy1=0.2122;
    double coy2=0.4247;

    double ans1=0.7381;
    double ans2=0.9327;

    //cox1*x+coy1*y-ans1;
    double newcx1=cox2/cox1;

    double cox1_1=cox1*newcx1;
    double coy1_1=coy1*newcx1;
    double ans1_1=ans1*newcx1;

    double cox2_1=cox2-cox1_1;
    double coy2_1=coy2-coy1_1;
    double ans2_1=ans2-ans1_1;

    double y=(ans2_1-cox2_1)/coy2_1;
    double x=(ans1-(coy1*y))/cox1;
    printf("\n\nX:\t\t%f\n",x);
    printf("\n\nY:\t\t%f\n",y);
    /*for(int y=0;y<1000;y+=0.001)
    {
        for(int x=0;x<1000;x+=0.001)
        {
            int new_x1=0.1036*x;
            int new_y1=0.2122*y;
            int new_x2=0.2081*x;
            int new_y2=0.4247*y;
            if(new_x1+new_y1=0.7381&&new_x2+new_y2=0.9327)
                break;
        }
    }*/
    float round_x=roundf(x*(pow(ten,roundnum)))/pow(ten,roundnum);
    float round_y=roundf(y*(pow(ten,roundnum)))/pow(ten,roundnum);

    printf("\n\nRounded X:\t\t%.*f\n",roundnum,round_x);
    printf("\n\nRounded Y:\t\t%.*f\n",roundnum,round_y);
    return 0;
}

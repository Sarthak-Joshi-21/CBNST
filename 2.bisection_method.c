//float f(float x)
// return(cos(x)-3x+1) math.h exp(x) for exponential
//main()
//x0,x1 f(x0).f(x1)<0 
//aerr
//itr=0
//x=(x0+x1)/2
//if(f(x)==0) then stop else f(x).f(x1)<0 x0 = x else x1 = x
//f(x)==0 or f(x)<aerr

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (cos(x)-3*x+1);
}

int main()
{
    float x0, x1, x;
    int flag=0;
    do
    {
        printf("\nEnter the interval:");
        scanf("%f%f",&x0,&x1);
        if((f(x0)*f(x1))<0) 	
        {
           printf("\nThe root lies between %f and %f",x0,x1);
           flag=1;
        }
        else
        {
           printf("\nWrong Interval!!!");
        }
    }while(flag!=1);
    float aerr;
    int itr=0;
    printf("\nEnter allowed error:");
    scanf("%f",&aerr);
    do
    {
        itr++;
        x=(x0+x1)/2;
        printf("\n%d Iteration Value of x is %f, Value of f(x) is %f",itr,x,f(x));
        if(f(x)==0||fabs(f(x))<=aerr)
        {
            printf("\n\nThe root of the equation is %f, after %d iterations",x,itr);
            flag=0;
        }
        else if(f(x)*f(x1)<0)
        {
            x0=x;
        }
        else
        {
            x1=x;
        }
    }while(flag==1);
}
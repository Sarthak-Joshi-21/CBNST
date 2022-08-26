//* find the error
//* inputs: true value and approx valye 
//* calaculte absolute , relative and percentage error
//* abs = ansolute value for int, fabs =absolute value for float
//* math.h fabs(Tv-Av) Ea , Er = Ea /Tv Ep = Er *100

#include <stdio.h>
#include <math.h>

int main()
{
    float Tv, Av, Ea ,Er, Ep;
    printf("enter the true value: ");
    scanf("%f",&Tv);
    printf("enter the approximate value :");
    scanf("%f",&Av);
    Ea = fabs(Tv-Av);
    Er = Ea/Tv;
    Ep = Er/Tv;
    Ep = Er*100;
    printf("Absolute  error: %f\nRelative Error: %f\n Percantage Error: %f\n",Ea,Er,Ep);

}
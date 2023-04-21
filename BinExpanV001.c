// This is final version bug free from Binomal Theorem
#include <stdio.h>
#include<conio.h>

double factorial(int pwrValue);

int main()
{
    double pwr, newValue, numerator, denominator;
    printf("\nEnter the power of (a+b) : ");
    scanf("%lf", &pwr);

    for (double i = 0; i <= pwr; i++)
    {
        double condition = pwr -i;
        numerator = factorial(pwr);
        denominator = factorial(pwr - i) * factorial(i);
        newValue = numerator / denominator;
        printf(" %.2lf",newValue);
        printf("a^%.2lf",pwr -i);
        printf("b^%.2lf",i);
        (condition==0 && i==pwr)?printf("\n***End of the Expansion***"):printf(" + "); //Condition applied to remove the plus sign at the end
        //printf(" %d(a^%d b^%d)  +  ", newValue, pwr - i, i);              //verson 001 update
    }
    getch();
    return 0;
}

double factorial(int pwrValue)
{
    if (pwrValue == 0 || pwrValue < 0)
    {
        return pwrValue = 1;
    }
    else
    {
        return pwrValue *= factorial(pwrValue - 1);
    }
}


//The program is limitted to 33 input value
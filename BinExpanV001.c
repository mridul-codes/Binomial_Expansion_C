// This is final version bug free from Binomal Theorem
#include <stdio.h>
#include<conio.h>

int factorial(int pwrValue);

int main()
{
    int pwr, newValue, numerator, denominator;
    printf("\nEnter the power of (a+b) : ");
    scanf("%d", &pwr);

    for (int i = 0; i <= pwr; i++)
    {
        int condition = pwr -i;
        numerator = factorial(pwr);
        denominator = factorial(pwr - i) * factorial(i);
        newValue = numerator / denominator;
        printf(" %d",newValue);
        printf("a^%d",pwr -i);
        printf("b^%d",i);
        (condition==0 && i==pwr)?printf("\n***End of the Expansion***"):printf(" + "); //Condition applied to remove the plus sign at the end
        //printf(" %d(a^%d b^%d)  +  ", newValue, pwr - i, i);              //verson 001 update
    }
    getch();
    return 0;
}

int factorial(int pwrValue)
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

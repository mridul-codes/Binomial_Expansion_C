// This is final version bug free from Binomal Theorem
#include <stdio.h>

int factorial(int pwrValue);

int main()
{
    int pwr, newValue, numerator, denominator;
    printf("\nEnter the power of (a+b) : ");
    scanf("%d", &pwr);

    for (int i = 0; i <= pwr; i++)
    {
        numerator = factorial(pwr);
        denominator = factorial(pwr - i) * factorial(i);
        newValue = numerator / denominator;
        printf(" %d(a^%d b^%d)  +  ", newValue, pwr - i, i);
    }

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

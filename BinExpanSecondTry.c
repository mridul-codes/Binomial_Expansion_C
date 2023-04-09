#include<stdio.h>

float factorial(float pwrValue);
float cofficent(float cofValue);

int main()
{
    float pwr, newValue, numerator, denominator;
    printf("\nEnter the power of (a+b) : ");
    scanf("%f", &pwr);
    // newValue = factorial(pwr);
    // printf("\nThe requuired factorial is %f ", newValue);

for (int i = 0; i<=pwr; i++)
{
    numerator= factorial(pwr);
    denominator = factorial(pwr-i)*factorial(i);
    newValue = numerator/denominator;
    printf(" %f ", newValue);

}








    // for (int i = 0; i!= pwr; i++)
    // {
    // newValue = cofficent(pwr);
    // printf("\nThe cofficent is : %f ", newValue);
    // if (pwr==1)
    // {
    // }
    // else if (pwr>=0)
    // {
    // printf("\nThe cofficent is : %f ", newValue);
    // }
    // else{
    // printf("\nThe cofficent is : %f ", newValue);
    // }
     
    // }
    
    return 0;
}

float factorial(float pwrValue){
    if (pwrValue==0||pwrValue<0){
        return pwrValue =1;
    }
    else{
        return pwrValue*=factorial(pwrValue-1);
    }
}

// float cofficent(float cofvalue){
//     float numerator, denominator, limter = cofvalue, mainterm,k=0;
  
//     do
//     {
//     numerator = factorial(cofvalue);
//     denominator = factorial(cofvalue - k)*factorial(k);
//     mainterm = numerator/denominator;
//     ++k;
//     return mainterm; //this will help to retrun value of cofficent each time
        
//     } while (k<limter);
    

//     }
    
#include<stdio.h>
#include<math.h>
int factorialAns(int value);

int main(){
    int value,n,k=0,middleNo;
    printf("\n\t**\t\t\t\t\t\t\t**\n\t\t**A Program to calculate Binonomal Expansion**\n");
    printf("\nEnter the Power of (a+b): ");
    scanf("%d",&value);
    n = value;
    middleNo = value;


    for (int i = 0; i < middleNo; i++)
    {

    int coefficent = factorialAns(value)/(factorialAns(value -k)*factorialAns(k));
    printf(" \t%da^(%d)b^(%d) +", coefficent, middleNo-k, k);
        k++;
    }
    for ( n = middleNo; n >1; n--)
    {
    int coefficent = factorialAns(value)/(factorialAns(value -k)*factorialAns(k));
    printf(" \t%da^(%d)b^(%d) +", coefficent, middleNo-k, k);
    
        k++;
    }
    
    return 0;
}



int factorialAns(int value){
    int factroial = 1, num1, num2;
    // printf("\n\n\t\tENTER A VALUE: ");
    // scanf("%d", &num1);
    num2 = num1;
    if (num1 > 0){
        for (int i = 0; i < num2; i++)
        {
            factroial *= num1;
            --num1;
        }
        value = factroial;
    }

    else if (num1 == 0){
        factroial = 1;
        value = factroial;
    }

    else{
        printf("\n\n\t***INVALID DIGIT ENTERED***\n\n");
    }
    return value;
}
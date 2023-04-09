#include<stdio.h>
int fact(int value);

//This method can't be applied for finding the Binomial Expansion
int main(){
    int num1, factAns;
    printf("\nEnter a no. to find the factorial: ");
    scanf("%d", &num1);
    factAns = fact(num1);
    printf("\n\n\t** Required value of factorial of %d is %d ** \n\n", num1, factAns);
    return 0;
}


int fact(int value){
    if (value==1||value ==0)
    {
        return value = 1;
    }
    else if (value<0)
    {
        printf("Invalid Number");
    }
    else
    {
        return value*=fact(value-1);
    }
    
}
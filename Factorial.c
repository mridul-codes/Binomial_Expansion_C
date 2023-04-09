#include <stdio.h>
#include<conio.h>

int main()
{
    int factroial = 1, num1, num2;
    printf("\n\n\t\tENTER A VALUE: ");
    scanf("%d", &num1);
    num2 = num1;
    if (num1 > 0)
    {
        for (int i = 0; i < num2; i++)
        {
            factroial *= num1;
            --num1;
        }

        printf("\n\n\t\t*** Factorial Is : %d ***", factroial);
    }

    else if (num1 == 0)
    {
        factroial = 1;
        printf("\n\n\t\t*** Factorial Is : %d ***", factroial);
    }

    else
    {
        printf("\n\n\t***INVALID DIGIT ENTERED***\n\n");
    }
    getch();   //Prevent the file from closing
    return 0;
}
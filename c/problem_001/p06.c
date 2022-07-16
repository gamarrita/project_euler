#include <stdio.h>
#include <stdlib.h>


unsigned int sumOfSquares(int a);
unsigned int squareOfsum(int a);

int main()
{
    int n = 100;
    int sum1;
    int sum2;

    sum1 = sumOfSquares(n);
    sum2 = squareOfsum(n);


    printf("Suma 1: %d\n", sum1);
    printf("Suma 2: %d\n", sum2);

    printf("resultado : %d\n", sum2 - sum1);

    return 0;
}


unsigned int sumOfSquares(int a)
{
    unsigned int acm = 0;
    unsigned int pot;

    while(a)
    {
        pot = a * a;
        if(acm > (acm + pot))
        {
            while(1)
            {
                printf("Error overrflow");
            }
        }
        acm = acm + pot;
        a--;
    }
    return acm;
}


unsigned int squareOfsum(int a)
{
    unsigned int sum = 0;
    unsigned int square = 0;
    int n;

    while(a)
    {
        sum = sum + a;
        a--;
    }

    n = sum;

    while(n > 0)
    {
        if(square > (square + sum))
        {
            while(1)
            {
                printf("Error overrflow: %d\n",square);
            }
        }
        square = square + sum;
        n--;
    }

    return square;
}

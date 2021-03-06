/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>

#define MAX_FIBO 4000000

int FiboSerie(int n)
{
    int i;
    int a = 0;
    int b = 1;
    int c;
    int sum = 0;

    if(n < 1)
    {
        sum = -1;
        printf("%d", sum);
        return sum;
    }
     
    for(i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c; 
        if(c <= MAX_FIBO)
        {
            if(c%2 == 0)
            {
                sum += c;
            }
        }
        else
        {
            break;
        }
    }
    return sum;
}



int main()
{
    int r;
    r = FiboSerie(MAX_FIBO);
    printf("\nAnswer = %d", r);
    return 0;
}
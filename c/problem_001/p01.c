/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

#define MAX 1000

int main()
{
    int n = MAX;
    int i;
    int sum = 0;


    for(i = 1; i < MAX; i++)
    {
        if((i % 3) == 0 ||  (i % 5) == 0)
        {
                printf("%d\n", i);
                sum += i;
        }
    }

    printf("Answer: %d", sum);

    return 0;
}

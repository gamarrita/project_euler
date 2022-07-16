/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int prime_test(int num)
{
    int r = -1;
    int n;

    if(num < 2)
    {
        return -1;
    }

    for(n = 2; n < num; n++)
    {
        if(num % n == 0)
        {
            return -1;
        }
    }
    return num;
}

int prime_next(int num)
{
    int r;
    do
    {
        num++;
        r = prime_test(num);
    } while(r == -1);

    return r;
}

int prime_factors(long long int num)
{
    int prime = 2;
    int prime_max = 2;

    if(num < 2)
    {
        return -1;
    }

    while(num != 1)
    {
        if(num % prime == 0)
        {
            printf("%d \n", prime);
            num /= prime;
            if(prime > prime_max)
            {
                prime_max = prime;
            }
            prime = 2;
        }
        else
        {
            prime = prime_next(prime);
        }
    }
    return prime_max;
}

int main()
{

    long long int a =  600851475143;
    int r;
    r = prime_factors(a);

    printf("\nAnswer = %d", r);
    return 0;
}
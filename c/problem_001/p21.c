#include <stdio.h>
#include <stdlib.h>

int isPrime(int );
int nextPrime(int);

int main()
{
    int n = 7;
    int i = 0;

    while(n < 999)
    {
        i++;
        n = nextPrime(n);
        printf("%d = prime %d\n", i, n);
    }
    return 0;
}


int isPrime(int num)
{
    int n = 2;
    int r = 1;

    if(num < 2) return 0;
    if(num == 2) return 1;

    while(n <= num / 2)
    {
        if(num % n == 0)
        {
            return 0;
        }
        n++;
    }
    return r;
}

int nextPrime(int num)
{
    do
    {
        num++;
    }
    while(isPrime(num) == 0);

    return num;
}


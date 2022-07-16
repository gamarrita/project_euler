#include <stdio.h>
#include <stdlib.h>


int isPrime(int num);
int nextPrime(int num);

int main()
{
    int n = 0;

    do
    {
        n = nextPrime(n);
        printf("n = %d\n", n);
    }
    while(n<999);


    return 0;
}

int isPrime(int num)
{
    int div = 2;
    if(num < 2) return 0;
    if(num == 2) return 1;

    do
    {
        if(num%div == 0) return 0;
        div++;
    }
    while(div < num/2);

    return 1;
}

int nextPrime(int num)
{
    do
    {
        num++;
    }while(isPrime(num) == 0);
    return num;
}


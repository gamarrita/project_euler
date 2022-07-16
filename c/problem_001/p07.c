// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <stdio.h>
#include <stdlib.h>

unsigned int nextPrime(unsigned int);
unsigned int isPrime(unsigned int);

int main()
{
    int prime  = 13;
    int count = 6;

    do
    {
        prime  = nextPrime(prime);
        printf("Is Prime ? %d\n", prime);
        count++;

    }while(count <10001);

    return 0;
}

// if prime return number else return 0
unsigned int isPrime(unsigned int num)
{
    unsigned int n;
    int r = 0;

    if(num < 2)
    {
        return 0;
    }

    for(n = 2; n < num/2; n++)
    {
        if( (num%n) == 0) break;
    }

    if (n == num/2)
    {
        r = num;
 //       printf("Es primo: %d\n", num);
    }
    else
    {
 //       printf("No es primo: %d\n", num);
    }

    return r;
}




unsigned int nextPrime(unsigned int a)
{
    unsigned int r;

    do
    {
        a++;
        r = isPrime(a);
    }
    while(!r);

    return a;
}

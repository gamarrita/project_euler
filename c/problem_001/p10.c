#include <stdio.h>
#include <stdlib.h>


typedef long long unsigned int uint64_t;


uint64_t isPrime(uint64_t num);
uint64_t nextPrime(uint64_t num);


int main()
{
    uint64_t acm = 17;
    uint64_t n = 10;
    uint64_t limit =  2000000;

    do
    {
        if(isPrime(n))
        {
            acm += n;
            printf("n = %I64u-> acm ? %I64u\n", n, acm);

        }
        n++;
    }
    while(n <limit);


    printf("acm ? %U64u\n", acm);

    return 0;
}



uint64_t isPrime(uint64_t num)
{
    uint64_t r = 0;
    uint64_t n = 2;

    if(num < 2)
    {
        return 0;
    }

    for(n = 2; n < num/2; n++)
    {
        if( (num%n) == 0) break;
    }

  if(n == num/2) r = num;

    return r;
}


uint64_t nextPrime(uint64_t num)
{
    do
    {
        num++;
    }while(!isPrime(num));

    return num;
}


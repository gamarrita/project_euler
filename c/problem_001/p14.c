#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int uint64_t;

uint64_t collatz(uint64_t);

int main()
{
    int limit = 1000000;
    int num = 1;
    uint64_t terms = 0;
    uint64_t max = 1;

    do
    {
        terms = collatz(num);
        if(terms > max)
        {
            max = terms;
            printf("Num: %d  Terms: %I64u\n",num, terms);

        }
        num++;
    }
    while( num <= limit);

    return 0;
}



uint64_t collatz(uint64_t num)
{
    uint64_t r = 1;
    while(num != 1)
    {
        r++;
        if( (num%2) == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * num + 1;
        }
        //On Debug
        //printf("collatz sqquence: %d\n", num);
    }
    return r;
}

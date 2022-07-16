#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef unsigned long long int uint64_t;

//
void bigInt_X2(char *);
void printBigInt(char *);

int main()
{
    int n;
    int acm;
    int limit = 1000;
    char big_int[400]= "1";

    for(n = 0; n < limit; n++)
    {
        bigInt_X2(big_int);
    }

    printBigInt(big_int);
    printf("\n");

    n=0;
    acm = 0;
    do
    {
        acm += big_int[n] - '0';
        n++;
    }
    while(big_int[n]);

    printf("%d\n", acm);



    return 0;
}

void bigInt_X2(char *ptr)
{
    int r;
    int a;
    int b = 0;
    int n;
    int l;

    l = strlen(ptr);

    for(n = 0; n<l; n++)
    {
        r = *ptr - '0';
        r *= 2;
        r += b;

        a = r % 10;
        b = r / 10;
        *ptr = a + '0';
        ptr++;
    }

    if(b)
    {
        *ptr = b + '0';
        ptr++;
        *ptr = 0;
    }
    *ptr = 0;
}

void printBigInt(char *ptr)
{
    if(*ptr)
    {
       printBigInt(ptr+1);
       printf("%c", *ptr);
    }
}

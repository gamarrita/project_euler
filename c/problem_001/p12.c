#include <stdio.h>
#include <stdlib.h>

int triangle(int n);
int divisor(int num);

int main()
{
    int t;
    int n = 0;
    int max = 0;
    int d;

    do
    {
        n++;
        t = triangle(n);
        d = divisor(t);
        if (d > max)
        {
            max = d;
            printf("triangle = %d, divisors = %d\n", t, max);
        }
    }
    while(d <= 500);

    printf("Triangle %d -> divisors = %d\n",t,  divisor(t));
    return 0;
}


int triangle(int n)
{
    int r = 0;

    while(n)
    {
        r += n;
        n--;
    }
    return r;
}

int divisor(int num)
{
    int r = 0;
    int n;

    for(n = 1; n <= num/2; n++)
    {
        if((num%n) == 0) r++;

        if( (500-r)
    }
    return r+1;
}

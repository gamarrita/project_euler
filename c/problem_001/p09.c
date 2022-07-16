#include <stdio.h>
#include <stdlib.h>


int isTriple(int a, int b, int c);

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int r = 0;

    do
    {
        c++;
        for(b = 2; b <c; b++)
        {
            for(a = 1; a < b; a++)
            {
                if( (a+b+c) == 1000)
                {
                    printf("%d, %d, %d\n",a, b, c);
                    r = isTriple(a, b, c);
                }
                if(r) break;
            }
            if(r) break;
        }
    }
    while(r == 0);

    printf("r = %d\n", r);
    return 0;
}


int isTriple(int a, int b, int c)
{
    int r = 0;


    if( (c*c) == (a*a+b*b)) r = a * b * c;

    return r;
}

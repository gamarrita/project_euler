#include <stdio.h>
#include <stdlib.h>

#define TAM_X 1000



void set_int_x(int [], int);
void ptr_int_x(int []);
void mul_int_x(int [], int);

int main()
{
    int int_x[TAM_X];
    int f = 100;
    int r = 0;
    int n;

    set_int_x(int_x, 1);
    ptr_int_x(int_x);

    while(f)
    {
        mul_int_x(int_x, f);
        f--;
        ptr_int_x(int_x);

    }

    n = TAM_X;
    do
    {
        n--;
        r += int_x[n];
    }
    while(n);




    printf("\nResultado = %d", r);

    return 0;
}


void ptr_int_x(int ptr[])
{
    int n = 0;

    while(ptr[n] == 0)
    {
        n++;
    }

    for(; n < TAM_X; n++)
    {
        putchar(ptr[n] + '0');
    }

    printf("\n");

}

void mul_int_x(int ptr[], int a)
{
    int n = TAM_X;
    int flag = 1;


    do
    {
        n--;
        ptr[n] *= a;
    }
    while(n);

    while(flag)
    {
        flag  = 0;
        n = TAM_X;
        do
        {
            n--;
            if(ptr[n] > 9)
            {
                ptr[n-1] += ptr[n] / 10;
                ptr[n] = ptr[n] % 10;
                flag = 1;
            }
        }
        while(n);
    }
}


void set_int_x(int ptr[], int number)
{
    int n;

    for(n = 0; n < TAM_X; n++)
    {
        ptr[n] = 0;
    }

    while(number)
    {
        n--;
        ptr[n] = number%10;
        number /= 10;
    }
}


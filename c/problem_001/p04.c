// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
// Find the largest palindrome made from the product of two 3-digit numbers.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
int isPalidromic(int num);
int invertInt(int num);

int main()
{

    int a = 999;
    int b = 999;

    int max = 0;
    int n;
    int m;
    int r;


    for( n = a; n > 99; n--)
    {
        for( m = b; m > 99; m--)
        {
            r = isPalidromic(n*m);
            if( r > max)
            {
                max = r;
            }
        }
    }
    printf("Answer = %d\n", max);
    return 0;
}



int invertInt(int num)
{
    char array[15];
    int len;

    len = sprintf(array, "%d", num);

    num = 0;

    while(len)
    {
        num = num * 10;
        num += array[len-1]-'0';
        len--;
    }
    return num;
}


int isPalidromic(int num)
{
    int n;

    n = invertInt(num);

    if( (num - n) == 0)
    {
        return num;
    }
    return 0;
}

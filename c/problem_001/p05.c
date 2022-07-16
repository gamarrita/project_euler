// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int limit = 20;
    int num = 10;


    while(1)
    {

        for(n = 2; n <= limit; n++)
        {
            if((num%n) !=0) break;
        }

        if(n == (limit+1)) break;
        num++;
    }

        printf("Answer = %d\n", num);

    return 0;
}

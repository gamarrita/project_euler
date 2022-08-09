#include <iostream>
using namespace std;

int isPrime(int n)
{
    if(n < 2) return 0;
    if(n % 2 == 0) return 0;

    for(int i = 2; i <= n/2; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int i = 1;
    long long int val = 600851475143;
    int prime = 2;

    while(val != 1)
    {
        i++;
        if(isPrime(i))
        {
            if((val % i) == 0)
            {
                val /=  i;
                prime = i;
            }
        }
        
    }
    cout << i;    
    return 0;
}
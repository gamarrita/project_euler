#include <iostream>

using namespace std;


int fibo(int n)
{
    int a = 0;
    int b = 1;
    int sum = 0;
    
    if(n < 2) return n;
    for(int i = 0; i < n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;   
}

main()
{
    int sum = 0;
    int n = 0;

    int f = fibo(n);
    while( f < 4000000)
    {
        if(f % 2 == 0) sum += f;
        n++;
        f = fibo(n);
    }
    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;


int is_div(int num)
{
    for(int n = 2; n <= 20; n++)
    {
        if(num%n) return 0;
    }
    return 1;
}


int main()
{
    int n = 1;
    while(!is_div(n)) n++;

    cout << n;

    return 0;
}
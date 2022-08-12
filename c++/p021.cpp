/*
* Let d(n) be defined as the sum of proper divisors of n (numbers less than n
*  which divide evenly into n).
* If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and
* each of a and b are called amicable numbers.
* For example, the proper divisors of 220 are:
* 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper
* divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
* Evaluate the sum of all the amicable numbers under 10000.
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::sort
using namespace std;

int proper_div_sum(int num)
{
    int sum = 1;
    
    if(!num) return 0;
    for(int i = 2; i <= num / 2; i++)
    {
        if(!(num%i))
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    
    vector<int> vec;
    vector<int> vec_out;
    int b;
    int a;
    int limit = 10000;
    int sum = 0;
    
    for(a = 2; a < limit; a++)
    {
        b = proper_div_sum(a);

        if((b < 10000) && (proper_div_sum(b) == a) && (a!=b))
        {
            cout << a << "," << b << endl;
            sum += a;
        }
    }
    cout << "Resultado = " << sum << endl;
    return 0;
}

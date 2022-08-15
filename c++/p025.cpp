/*
The Fibonacci sequence is defined by the recurrence relation:

Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
Hence the first 12 terms will be:

F1 = 1
F2 = 1
F3 = 2
F4 = 3
F5 = 5
F6 = 8
F7 = 13
F8 = 21
F9 = 34
F10 = 55
F11 = 89
F12 = 144
The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    int val = 1;
    unsigned nth = 1000000;
    for(unsigned n = 1; n < 10; n++)
    {
        val *= n;
        cout << val << endl;
        vec.push_back(val);
    }

    int sum = 0;
    auto it = vec.end() - 1;
    while(it != vec.begin())
    {
        
        if(sum + *it <= 1000000)
        {
            sum += *it;
            cout << "+" << *it << " = " << sum << endl;
        }
        else
        {
            it--;
        }
    }

    return 0;
}


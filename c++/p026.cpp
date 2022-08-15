/*
A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:

1/2	= 	0.5
1/3	= 	0.(3)
1/4	= 	0.25
1/5	= 	0.2
1/6	= 	0.1(6)
1/7	= 	0.(142857)
1/8	= 	0.125
1/9	= 	0.(1)
1/10	= 	0.1
Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.

Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.

*/
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    unsigned limit = 1000;
    unsigned max = 1;

    for (unsigned div = 2; div < limit; div++)
    {
        unsigned counter = 1;
        unsigned num = 10;
        vec = {1};
        for (unsigned n = 1; n <= div && num; n++)
        {
            while (num < div)
            {
                num *= 10;
            }
            num = num % div;
            auto it = find(vec.begin(), vec.end(), num);
            if (it == vec.end())
            {
                vec.push_back(num % div);
            }
            else
            {
                counter = vec.end() - it;
                break;
            }
        }
        if (counter > max)
        {
            max = counter;
            cout << "max = " << max << endl;
            cout << "div = " << div << endl
                 << endl;
        }
    }
    return 0;
}

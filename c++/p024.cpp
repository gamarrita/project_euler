/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool test_int(string str)
{
    auto it_beg = str.begin();
    auto it_end = str.end();

    sort(it_beg, it_end);

    if(str == "123456789" || str == "0123456789")
    {
        return true;
    }
    return false;
}


int main()
{
    constexpr unsigned nth = 1;
    unsigned seed = 2783915604;
    
    unsigned n = 0;
    while(n < nth)
    {
        do
        {
            seed += 9;
        } while (!test_int(to_string(seed)));
        n++;
        cout << "n = " << n  << " -> "<< seed << endl;
    }
    

    return 0;
}


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


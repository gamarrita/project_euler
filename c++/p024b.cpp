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


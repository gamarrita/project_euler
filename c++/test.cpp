#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::sort
#include <numeric> //iota
using namespace  std;


int main()
{
    
    vector<int> vec(10,0);
    int sum;

    iota(vec.begin(), vec.end(), 1);

    while(vec.begin() != vec.end())
    {
        vec.erase(vec.begin());
        for(auto x : vec)
        {
            cout << x << " "; 
        }
        cout << endl;
    }


    return 0;
}

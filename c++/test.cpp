#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::sort
#include <numeric> //iota
using namespace  std;


int main()
{
    
    vector<int> vec(5,0);
    int sum;

    iota(vec.begin(), vec.end(), 1);
    vec.erase(vec.begin(), vec.begin()+1);

    for(auto x : vec)
    {
        cout << x << endl;
    }
    

    return 0;
}

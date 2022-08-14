#include <iostream>
#include <chrono>
#include <vector>
#include <numeric>

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

bool test_abundant(unsigned num)
{
    if(proper_div_sum(num) > num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    constexpr unsigned limit = 28124;
    auto start = chrono::system_clock::now();
    vector<int>vec(limit, 0);
    vector<int>vec_ab;

    iota(vec.begin(), vec.end(), 0);
    unsigned sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;

    for(auto x: vec)
    {
        if(test_abundant(x))
        {
            vec_ab.push_back(x);
        }
    }

    unsigned sum_ab = 0;
    for(auto it_1 = vec.begin(); it_1 != vec.end(); it_1++)
    {
        for(auto it_2 = vec_ab.begin();
                 (it_2 != vec_ab.end()) && (*it_2 < *it_1); it_2++)
        {
            for(auto it_3 = vec_ab.begin();
                     (it_3 != vec_ab.end()) && (*it_3 + *it_2 <= *it_1); it_3++)
            {
                if(*it_1 == *it_2 + *it_3)
                {
                    sum_ab += *it_1;
                    it_2 = vec_ab.end() - 1;
                   break;
                }
            }
        }
        cout << "Abnormal = "  << *it_1 << endl;
    }

    cout << endl << sum - sum_ab << endl;
    auto end = chrono::system_clock::now();
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "ms" << endl;
    return 0;
}

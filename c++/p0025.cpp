#include <iostream>
#include <string>

using namespace std;


void sum_str(string a, string b, string &r)
{
    if(b.length() > a.length())
    {
        r = b;
        b = a;
    }
    else
    {
        r = a;
    }

    r.insert(r.begin(),'0');
    auto itr = r.rbegin();
    unsigned val;
    for(auto itb = b.crbegin(); itb !=b.crend(); itb++)
    {
        val = *itb - '0';
        *itr += val;
        if(*itr > '9')
        {
            *(itr + 1) += 1;
            *itr -= 10;
        }
        itr++;
    }
    if(r[0] == '0')
    {
        r.erase(0,1);
    }
}


int main()
{
    string a = "1";
    string b = "1";
    string r;

    unsigned count = 3;
    while(r.length() < 3)
    {
        sum_str(a, b, r);
        cout << "index = " << count << " <-> " << r << endl;
        a = b;
        b = r;
        count++;
    }
    return 0;
}
#include <iostream>

using namespace std;

main()
{
    int sum = 0;
    for(int n = 0; n < 1000; n++)
    {
        if(n%3==0 || n%5==0)
        {
            sum += n;
        }
    }
    cout << sum << endl;
    return 0;
}


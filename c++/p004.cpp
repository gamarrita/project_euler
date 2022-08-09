#include <iostream>
using namespace std;

int isPalindromic(int num)
{
    int num_inv = 0;

    int temp = num;
    while (temp)
    {
        num_inv *= 10;
        num_inv += (temp % 10);
        temp /= 10;
    }

    if (num == num_inv)
        return 1;
    return 0;
}

int main()
{
    int a;
    int b;

    int mul;
    int max_pal = 1;
    int st = 0;
    while (a != 99 || b != 99)
    {

        switch (st)
        {
        case 0:
            a = 999;
            b = 999;
            st = 1;
            break;
        case 1:
            a--;
            b = 999;
            st = 2;
            break;
        case 2:
            b--;
            if (a == b)
                st = 1;
            break;
        }
        mul = a * b;

        if (isPalindromic(mul))
        {
            if (max_pal < mul)
            {
                max_pal = mul;
            }
        }
    };
    cout << a << " * " << b << " = " << max_pal;
    return 0;
}
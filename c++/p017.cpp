/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<string> pUnits =
    {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

vector<string> pTens =
    {
        "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",
        "ninety"};

string pHundreds = "hundred", thousand = "one thousand";

string int_to_word(int num_in)
{
    string num_str;

    int num = num_in;
    if (num == 1000)
    {
        num_str = "one thousand";
        return num_str;
    }

    if ((num >= 100) && (num < 1000))
    {
        num_str = pUnits[num / 100];
        num_str += " ";
        num_str += pHundreds;
        num %= 100;
        if (num)
        {
            num_str += " and ";
        }
        else
        {
            return num_str;
        }
    }

    if (num > 0 && num < 20)
    {
        num_str += pUnits[num];
        return num_str;
    }

    if (num > 20)
    {
        num_str += pTens[num / 10];
        num %= 10;
        if (num)
        {
            num_str += "-";
        }
        else
        {
            return num_str;
        }
    }

    if (num)
    {
        num_str += pUnits[num];
    }
    return num_str;
}

int main()
{
    string num_str;
    int count = 0;
    int total = 0;
    int max = 1000;

    for (int i = 1; i <= max; i++)
    {
        num_str = int_to_word(i);
        count = 0;
        for (auto ch : num_str)
        {
            if (!isspace(ch))
                if(ch != '-')
                    count++;
        }
        total += count;
        cout << num_str << " (" << count << ")" << " = " << total << endl;
    }
    return 0;
}

/*
 * Using names.txt (right click and 'Save Link/Target As...'), a 46K text file
 * containing over five-thousand first names, begin by sorting it into
 * alphabetical order. Then working out the alphabetical value for each name,
 * multiply this value by its alphabetical position in the list to obtain a name
 * score.
 * For example, when the list is sorted into alphabetical order, COLIN, which is
 * worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN
 * would obtain a score of 938 × 53 = 49714.
 * What is the total of all the name scores in the file?
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // std::sort
#include <fstream>
using namespace std;

unsigned get_name_weight(string name)
{
    unsigned weight = 0;
    for (auto ch : name)
    {
        weight += ch + 1 - 'A';
    }
    return weight;
}

int main()
{
    string names;
    vector<int> weights;
    vector<string> vec_names;
    unsigned sum;
    unsigned sums = 0;
    fstream fnames;

    fnames.open("p022.txt", ios::in);
    if (fnames.is_open())
    {
        string new_name;
        while (getline(fnames, new_name, ','))
        {
            new_name.erase(remove(new_name.begin(), new_name.end(), '\"'), new_name.end());
            vec_names.push_back(new_name);
        }

        sort(vec_names.begin(), vec_names.end());

        int n = 1;
        for (auto name : vec_names)
        {
            sum = get_name_weight(name);
            sums += sum * n;
            n++;
            if (sum > sums)
            {
                cout << "Error!!!!!!!!!!";
                return -1;
            }
            cout << name << "\t=\t" << sums << endl;
        }
    }
    fnames.close();
    cout << sums;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a;
    cin >> a;

    vector<char> v;

    for (int i = 0; i < a.size(); i++)
    {
        char b = a[i];

        if (find(v.begin(), v.end(), b) == v.end())
        {
            v.push_back(b);
        }
    }
    if (v.size() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}
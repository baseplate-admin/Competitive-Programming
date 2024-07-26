#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> a;

    int i;

    for (i = 0; i < s.size(); i++)
    {
        char x = s[i];
        if (isdigit(x))
            a.push_back(x - '0');
    }

    sort(a.begin(), a.end());

    for (i = 0; i < a.size(); i++)
    {
        int p = a[i];

        cout << p;
        if (i == a.size() - 1)
            cout << endl;
        else
            cout << "+";
    }
}
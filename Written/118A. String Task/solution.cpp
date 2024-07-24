#include <bits/stdc++.h>
using namespace std;

int main()
{
    const set<char> vowel_arr = {'a', 'e', 'i', 'o', 'u','y'};

    vector<char> a;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        char x = tolower(s[i]);
        if (!vowel_arr.contains(x))
            a.push_back(x);
    }
    for (auto p : a)
    {
        cout << '.' << p;
    }
    cout << endl;
}

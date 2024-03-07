#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no;
    cin >> no;

    int c = 0;
    for (int i = 0; i < no; i++)
    {
        string s;
        cin >> s;
        if (s.find("++") != string::npos)
        {
            c++;
        }
        if (s.find("--") != string::npos)
        {
            c--;
        }
    }

    cout << c << "\n";
}
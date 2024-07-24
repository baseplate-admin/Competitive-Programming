#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> arr;
    string s;

    while (1)
    {
        char x = getchar();
        if (x == EOF)
            break;

        if (x == '\n')
        {

            arr.push_back(s);
            s = "";
        }
        else
            s += x;
    }
    int participants = 0;
    int bytes_send = 0;

    for (auto p : arr)
    {
        if (p[0] == '+')
            participants++;

        else if (p[0] == '-')
            participants--;
        else
        {

            for (int i = 0; i < p.size(); i++)
            {
                char x = p[i];
                if (x == ':')
                {
                    bytes_send += participants * (p.size() - (i + 1));
                    break;
                }
            }
        }
    }
    cout << bytes_send;
}

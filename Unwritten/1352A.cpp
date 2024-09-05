#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long x;
        cin >> x;
        vector<int> arr;
        int iter = 0;

        while (x)
        {
            int rem = x % 10;
            if (rem > 0)
            {
                arr.push_back(rem * pow(10, iter));
            }
            x /= 10;
            iter++;
        }

        cout << arr.size() << endl;
        for (auto p : arr)
            cout << p << " ";
        cout << endl;
    }
}
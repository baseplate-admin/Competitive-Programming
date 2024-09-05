#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long split = n % 2 == 0 ? n / 2 : n / 2 + 1;

    if (k <= split)
    {

        cout << (2 * k) - 1;
    }
    else
    {
        cout << 2 * (k - split);
    }
    cout << endl;
}
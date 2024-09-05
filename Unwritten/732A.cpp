#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    while (1)
    {

        int total = k * i;
        int divisor = total / 10;
        // cout << i << "," << total << "," << total - (divisor * 10) << "," << r << "," << (total - (divisor * 10)) % r << endl;

        if (total - (divisor * 10) == 0 || (total - (divisor * 10)) - r == 0)
            break;
        i++;
    }
    cout << i << endl;
}
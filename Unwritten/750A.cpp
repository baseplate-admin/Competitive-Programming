#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total_min = 4 * 60;
    int n, k;
    cin >> n >> k;
    total_min = total_min - k;

    if (total_min < 5)
    {
        cout << 0 << endl;
    }
    else
    {
        int i = 1;
        while (1)
        {
            total_min -= i * 5;
            if (total_min < (i + 1) * 5 || i == n)
                break;
            i++;
        }

        cout << i << endl;
    }
}
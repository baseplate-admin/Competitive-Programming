#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    long long ans;
    double t;
    while (n--)
    {
        ans = 0;
        cin >> t;
        ans = ceil((t / 2) - 1);
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    vector<int> arr;
    // ML limit
    arr.push_back((k * l) / nl);
    // Lime limit
    arr.push_back(c * d);
    // Salt limit
    arr.push_back(p / np);

    int min = *ranges::min_element(arr);

    cout << min / n << endl;
}
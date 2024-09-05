#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    vector<int> arr = {x1, x2, x3, x4};

    sort(arr.begin(), arr.end());

    cout
        << abs(arr[3] - arr[1]) << ' ' << abs(arr[3] - arr[2]) << " " << abs(arr[3] - arr[0]) << " " << endl;
}
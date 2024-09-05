#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> arr = {a, b};

    sort(arr.begin(), arr.end());

    cout << arr[0] << ' ' << floor((arr[1] - arr[0]) / 2.0) << endl;
}
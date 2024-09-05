#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int radius;

    // Edge case for one item
    radius = max(arr[0], l - arr[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++)
    {
        radius = max(radius, arr[i + 1] - arr[i]);
    }

    cout << fixed << setprecision(20) << radius / 2.0 << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr + m);

    int low;

    int start = 0, end = n - 1;

    if (n == m)
    {
        cout << abs(arr[0] - arr[m - 1]) << endl;
        return 0;
    }

    while (end <= (m - 1))
    {
        int diff = arr[end] - arr[start];
        if (start == 0)
        {
            low = diff;
        }
        else
        {
            low = min(low, diff);
        }
        // cout << start << "," << end << "," << diff << endl;

        start++;
        end++;
    }
    cout << low << endl;
}
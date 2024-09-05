#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int total = accumulate(arr, arr + n, 0, plus<int>());

    int left_total = 0;
    int coin_count = 0;

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        // cout << current << "," << left_total << "," << total << endl;

        if ((left_total + current) >= (total - current))
        {
            break;
        }
        else
        {
            total -= current;
            left_total += current;
            coin_count++;
        }
    }
    cout << n - coin_count << endl;
}
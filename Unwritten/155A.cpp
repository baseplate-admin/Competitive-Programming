#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int awesome = 0;
    int best = arr[0], worst = arr[0];
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        if (current > best)
        {
            best = current;
            awesome++;
        }
        else if (current < worst)
        {
            worst = current;
            awesome++;
        }
    }

    cout << awesome << endl;
}

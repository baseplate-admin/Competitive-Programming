#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[] = {0, 0, 0, 0};

    while (n--)
    {

        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            arr[0]++;
            break;
        case 2:
            arr[1]++;
            break;
        case 3:
            arr[2]++;
            break;
        case 4:
            arr[3]++;
            break;
        }
    }
    int count = 0;

    count += arr[3];
    arr[3] = 0;

    count += arr[2];
    arr[0] -= arr[2];

    if (arr[1] % 2 == 0)
    {
        int div = arr[1] / 2;
        count += div;
        arr[1] -= div * 2;
    }
    else
    {
        int div = arr[1] / 2;
        count += div;
        arr[1] -= div * 2;
        if (arr[0] > 0)
        {
            arr[0] -= 2;
        }
        count++;
    }
    // for (auto p : arr)
    // {
    //     cout << p << ' ';
    // }
    if (arr[0] > 0)
    {
        if (arr[0] % 4 == 0)
        {
            count += arr[0] / 4;
        }
        else
        {
            int div = arr[0] / 4;
            count += div;
            arr[0] -= div * 4;
            count++;
        }
    }

    cout << count << endl;
}
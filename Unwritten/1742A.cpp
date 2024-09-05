#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> arr = {a, b, c};
        sort(arr.begin(), arr.end());
        if (arr[0] + arr[1] == arr[2])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
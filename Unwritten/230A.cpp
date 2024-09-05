#include <bits/stdc++.h>

using namespace std;

bool check_prime(unsigned long long n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long r;
        cin >> r;

        double square_root = sqrt(r);

        if (ceilf(square_root) == square_root)
        {
            if (check_prime(square_root))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}
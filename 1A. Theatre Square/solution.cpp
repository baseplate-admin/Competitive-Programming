#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double m, n, a;
    cout.precision(100);
    cin >> m >> n >> a;
    cout << ceil(m / a) * ceil(n / a) << endl;
    return 0;
}
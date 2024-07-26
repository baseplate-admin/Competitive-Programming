#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>> arr[i];
    }


    sort(arr,arr + m);
    for(int i=0;i<m;i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
    int least = arr[n-1] - arr[0];
    for (int i = 1; i <= m - n; ++i)
    {
        cout << arr[i+n-1] << "," << arr[i] << endl;
        if (arr[i+n-1] - arr[i] < least)
        {
            least = arr[i+n-1] - arr[i];
        }
    }
    cout << least << endl;
    return 0;

}

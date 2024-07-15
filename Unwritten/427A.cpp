#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>> n;
    int carry = 0;
    int cnt=0;
    while(n--){
        int x;
        cin >> x;

        if(x > 0) carry+=x;
        if(x==-1){
            if (carry > 0) carry--;
            else cnt++;
        }
    }
    cout << cnt;
}

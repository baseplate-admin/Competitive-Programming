#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int _mx=1;
    int _count=1;
    int profit[n];
    for(int i=0;i<n;i++){
        cin>> profit[i];
    }
    for(int i=0;i<n;i++){
            if(i>0){
            if (profit[i] >= profit[i-1]){
                _count++;

                _mx = max(_count,_mx);
            }else{
                _count =1;
            }

            }
        }

    cout << _mx << endl;

}

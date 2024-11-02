#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;

    cin >> n >> m;

    long long arr[m];

    for(long long i =0;i<m;i++){
        cin >> arr[i];
    }

    long long curr = NULL;
    long long steps = -1;

    for (auto p:arr){
        if(curr == NULL){
            // First iteration
            steps += p;
        }else{
            if(curr > p){
                steps += ((n-curr) + p);
            }else{
                steps += (p-curr);
            }
        }
        curr = p;

    }
    cout << steps << endl;
}

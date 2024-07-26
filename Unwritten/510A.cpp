#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    bool right = true;
    bool left = false;

    for(int i =0;i<m;i++){

            if(i%2!=0){
                if(right){
                    for(int j=0;j<n;j++){
                        if(j==n-1) cout << "#";
                        else cout << ".";
                    }
                    left = true;
                    right = false;
                }else{
                    for(int j=0;j<n;j++){

                        if(j==0) cout << "#";
                        else cout << ".";
                    }

                    left = false;
                    right = true;
                }
            } else{
                for(int j=0;j<n;j++){
                    cout << "#";
                }
            }

        cout << endl;
    }
}

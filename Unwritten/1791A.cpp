#include <bits/stdc++.h>


using namespace std;

int main(){
    set<char> a = {'c','o','d','e','f','r','s'};

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        char x;
        cin >> x;
        if(a.contains(x)){
            cout << "YES" <<endl;
        }else{
            cout << "NO"<<endl;

        }

    }

}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> database;

    while(n--){
        string test;
        cin >> test;
        if (database.count(test) == 0){
            cout << "OK"<<endl;
            database[test] = 1;

        }else{
            cout << test << database[test] << endl;
            database[test] += 1;
        }
    }
}

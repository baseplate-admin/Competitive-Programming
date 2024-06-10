#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    getline(cin,s);

    set<int> b;
    for(int i=0;i<s.length();i++){
        char x = s[i];
        if(isalpha(x)) {
            b.insert(x);
        }

    }
    cout << b.size();

}

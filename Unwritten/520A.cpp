#include <bits/stdc++.h>


using namespace std;
int main(void){
    string s;
    int n;
    cin >> n;
    cin >> s;

    set<char> se;

    for(int i=0;i<s.length();i++){
        se.insert(tolower(s[i]));
    }

    if(se.size() >= 26){
        cout << "YES";
    }else{
        cout << "NO";
        }

}

#include <bits/stdc++.h>

using namespace std;


int main(){

    string s;
    cin >> s;

    bool is_first_lower = false;
    int xx=0;

    for(int i=0;i<s.size();i++){
        char x = s[i];

        if(isupper(x)) {
            xx++;
        }
        else{
            if(i==0) is_first_lower = true;

        }
    }


    if(xx==s.size()||is_first_lower && xx==s.size()-1){
         for(int i=0;i<s.size();i++){
            char x = s[i];
            if(isupper(x)){
                cout << (char)tolower(x);
            }else{
                cout << (char)toupper(x);
            }
        }
    }else{
        cout << s;
    }


}

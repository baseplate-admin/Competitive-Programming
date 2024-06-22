#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int numbers[n];
    for(int i =0;i<n;i++){
        cin>>numbers[i];
    }

    int even=0;
    int odd=0;
    int last_even_index=0,last_odd_index=0;

    for(int i=0;i<n;i++){
        int x = numbers[i];
        if(x%2==0) {
            even++;
            last_even_index = i;
        }else{
            odd++;
            last_odd_index=i;
        }
    }



    if (even<odd) cout << last_even_index +1 <<endl;
    else cout << last_odd_index+1 << endl;

}

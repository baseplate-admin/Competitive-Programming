#include <stdio.h>

int main(){

    char s[100];

    gets(s);

    int flag=0;
    int _0=0,_1=0;
    for(int i=0;i<=strlen(s);i++){
        if(s[i-1] != s[i]){
            _0 = 1;
            _1 = 1;
        }
        if(s[i-1] == s[i] && s[i] == '0'){
            _0++;
        }else if(s[i-1] == s[i] && s[i] == '1'){
            _1++;
        }

        if (_0 ==7 || _1 == 7) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) printf("YES");
    else printf("NO");
}

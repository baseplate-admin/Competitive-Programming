#include <stdio.h>

int main(){

    int len;
    scanf("%d",&len);
    char s[len];

    scanf("%s", &s);
    int anton=0,danik=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'A' ) anton++;
        else if(s[i] == 'D') danik++;
    }

    if (anton>danik) printf("Anton");
    else if (danik>anton) printf("Danik");
    else printf("Friendship");
}

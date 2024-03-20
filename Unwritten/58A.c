#include <stdio.h>


int main(){
    char s[100];

    scanf("%s",&s);

    int n=0;

    for(int i = 0;i<strlen(s);i++){
        char x = s[i];
        if(n==0&& x=='h'){
            n++;
        }else if(n==1&& x=='e'){
            n++;
        }else if((n==2||n==3)&& x=='l'){
            n++;
        }else if(n==4&&x=='o') n++;
    }

    if(n==5) printf("YES");
    else printf("NO");
}

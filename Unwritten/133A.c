#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    scanf("%s",&s);
    int flag = 0;

    for(int i =0;i<strlen(s);i++){
        char x = s[i];

        if (x=='H' || x =='Q' || x=='9') {
            flag =1;
            break;
        }

    }
    if (flag ==1) printf("YES");
    else printf("NO");

}

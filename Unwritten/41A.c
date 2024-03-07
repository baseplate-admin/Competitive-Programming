#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    scanf("%s",&s1);
    scanf("%s",&s2);

    if(strcmp(s2,strrev(s1))==0){
        printf("YES");
    }else{
        printf("NO");
    }
}

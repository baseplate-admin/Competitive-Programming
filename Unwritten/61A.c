#include <stdio.h>


int main(){

    char s1[100];
    char s2[100];


    gets(s1);
    gets(s2);

    for(int i =0;i<strlen(s1);i++){

        printf("%d",s1[i]^s2[i]);
    }

}

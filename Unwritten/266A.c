#include <stdio.h>

int main(){
    int r,g,b;
    int len_of_str;

    scanf("%d",&len_of_str);

    char string[len_of_str];
    scanf("%s",&string);

    for(int i=0;i<len_of_str;i++){
        if (string[i-1]==string[i]){
            if(string[i]=='R'){
                r++;
            }else if(string[i] == 'G'){
                g++;
            }else{
                b++;
            }
        }
    }
    printf("%d",r+g+b);

}

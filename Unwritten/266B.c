#include <stdio.h>

int main(){

    int n,t;
    scanf("%d %d",&n,&t);
    char s[n];
    scanf("%s",&s);

    for(int _=0;_<t;_++){
        for(int i=0;i<n-1;){
            char x,y;
            x= s[i];
            y = s[i+1];

            if(x=='B' && y =='G'){
                s[i+1] = x;
                s[i] = y;
                i+=2;
            }else{
                i++;
            }
        }
    }
    printf("%s",s);
}

#include <stdio.h>


int main(){
    char s[100];
    fgets(s,100,stdin);


    int flag= 0;
    int t=0;
    for(int i=0;i<100 && t<=5;i++){
        if(t==0 && s[i] <= 'h'){
            continue;
        }
        else if(t==1&& s[i]<='e'){
            continue;
        }else if((t==2||t==3)&& s[i]<='l'){
            continue;
        }
        else if(t==4&& s[i]<='o'){
            continue;
        }
        t++;

    }
    printf("%d",t);
    if(t==5){
        printf("YES");
    }else{
        printf("NO");
    }

}

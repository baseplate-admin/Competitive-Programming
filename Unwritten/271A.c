#include <stdio.h>
#include <stdlib.h>
#define _OPEN_SYS_ITOA_EXT

int main(){
    int a[10];


    char s[4];
    fgets(s,5,stdin);

    while(1){
        int si = atoi(s);
        si++;
        sprintf(s, "%d", si);
        for (int i=0;i<10;i++){
            a[i] = 0;
        }

        int flag=0;
        for(int i=0;i<4;i++){
           int d = (int)s[i]-48;
           a[d]++;
        }

        for (int i=0;i<10;i++){
            if(a[i]>1){
                flag=1;
            }
        }

        if(flag==0){
            break;
        }
    }

    printf("%.4s",s);
}

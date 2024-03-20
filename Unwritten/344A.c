#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    char s[3];
    int count=0;
    for(int i = 0;i<n;i++){
        char is[3];
        scanf("%s",&is);

        if (strcmp(s,is) != 0){
            strcpy(s,is);
            count++;
        }
    }
    printf("%d",count);

}

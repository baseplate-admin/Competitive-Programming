#include <stdio.h>
int check(char s[]){
    int flag_1=0;

    for(int i = 0;i<strlen(s);i++){
        int x = (int)s[i] - 48;

        if (x!= 7 && x!=4){
            flag_1=1;
            break;
        }

    }
    return flag_1;
}


int main(){
    int n;
    scanf("%d",&n);
    int factor[n];
    int j=0;

    int flag_2=0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            factor[j]=i;
            char snum[4];
            sprintf(snum, "%d", i);
            int x = check(snum);
            if(x==0){
                flag_2 = 1;
                break;
            }
        }
    }
    if (flag_2 == 1)
    printf("YES");
    else{
        printf("NO");
    }
}

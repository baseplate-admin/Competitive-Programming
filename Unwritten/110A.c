
#include <stdio.h>

int main(){
    long long x;
    scanf("%lld",&x);
    int flag = 0;
    int no_of_4 = 0,no_of_7=0;

    if (x== 4 || x==7){
        printf("NO");
        return 0;
    }
    while(x && flag != 1){
        int d = x%10;
        if(d==4) no_of_4++;
        if (d==7) no_of_7++;
        x /= 10;
    }
    if(no_of_4 + no_of_7 == 4||no_of_4 + no_of_7==7) printf("YES");
    else printf("NO");
}

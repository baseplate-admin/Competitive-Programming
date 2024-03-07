#include <stdio.h>

int main(){

    int n=0,k=0;
    scanf("%d %d",&n,&k);

    for (int i=1;i<=k;i++){
        int d = n%10;

        if (d == 0){
            n= n/10;
        }else{
            n--;
        }
    }
    printf("%d",n);
}

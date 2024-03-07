#include <stdio.h>

int main(){

    int k,n,w;

    scanf("%d %d %d",&k,&n,&w);

    long sum = 0;
    for (int i=1;i<=w;i++){
        sum += k*i;
    }
    if(sum>n){
        printf("%d",sum-n);
    }else{
        printf("0");
    }
}

#include<stdio.h>

int main(){

    int cash;
    scanf("%d", &cash);

    int count = 0;
    while(cash>0){
        if(cash >= 100){
            int x = cash/100;
            cash = cash-100*x;
            count+= x;
        }
        else if (cash >= 20){
            int x = cash/20;
            cash = cash-20*x;
            count+= x;
        }
        else if (cash >= 10){
            int x = cash/10;
            cash = cash-10*x;
            count+= x;
        }
        else if (cash >= 5){
            int x = cash/5;
            cash = cash-5*x;
            count+= x;
        }
        else{
            count += cash;
            cash = 0;
        }

    }
    printf("%d",count);

}

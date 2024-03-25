#include<stdio.h>
#include<math.h>

int main(){

    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            int x;
            scanf(" %d",&x);
            if(x==1){
                printf("%d",abs(row-3)+abs(col-3));
                break;
            }
        }
    }
}

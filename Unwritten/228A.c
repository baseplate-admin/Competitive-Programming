#include <stdio.h>

int main(){

    int arr[4];
    int _;
    for(_=0;_<4;_++){
        scanf(" %d",&arr[_]);
    }
    int matches=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            int x,y;
            x = arr[i];
            y = arr[j];

            if(x<y){
                arr[i] = y;
                arr[j] = x;
            }
        }
    }

    for(int i =0;i<4-1;i++){
        if(arr[i] == arr[i+1]) matches++;
    }
    printf("%d",matches);
}

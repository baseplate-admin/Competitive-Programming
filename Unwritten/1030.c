#include <stdio.h>

int main(){
    int participants;
    scanf("%d",&participants);
    int arr[participants];
    for(int i =0;i<participants;i++){
        scanf(" %d",&arr[i]);
    }

    int flag=0;
    for(int i=0;i<participants;i++){
        int x = arr[i];
        if(x == 1){
            flag=1;
            break;
        }
    }

    if (flag==1) printf("HARD");
    else printf("EASY");
    return 0;
}

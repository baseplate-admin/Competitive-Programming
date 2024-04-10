#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int x,y;
            x = arr[i];
            y = arr[j];
            if(y>x){
                arr[j]=x;
                arr[i]=y;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

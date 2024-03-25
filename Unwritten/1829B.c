#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    for(int _=0;_<n;_++){
        int l;
        scanf("%d",&l);
        int arr[l];
        for(int i=0;i<l;i++){
            scanf(" %d",&arr[i]);
        }
        int mem = 0;
        int longest = 0;
        for(int j=0;j<l;j++){
             if(arr[j] ==1) {
                longest = 0;
            }
            else if(arr[j] == 0){
                longest++;
                if (mem<longest) mem=longest;
            }


        }
        printf("\n%d\n",mem);
    }
}

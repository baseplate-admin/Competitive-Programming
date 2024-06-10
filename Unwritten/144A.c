#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);


    int b[n];
    for(int i=0;i<n;i++){
        int x;
        scanf(" %d",&x);
        b[i] = x;
    }
    int smallest = b[0],largest =b[0];

    for(int i=0;i<n;i++){
        int x=b[i];
        if(x > largest) largest = x;
        if (x < smallest) smallest = x;
    }



    int small_count =0,largest_count = 0;
    int small_index=0,large_index=0;
    for(int i=0;i<n;i++){
        if (b[0] == largest && b[n-1] == smallest) break;

        int x = b[i];
        if(x == smallest){
            small_count = n-i-1;
            small_index = i;
        }
        if (b[0] == largest) continue;
        if(x==largest && large_index==0 ) {
            largest_count = i;
            large_index = i;
        }
    }

    if (small_index<large_index){
        largest_count -= 1;
    }

    printf("%d",small_count+largest_count);
}

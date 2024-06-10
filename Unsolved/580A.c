#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    int max=0;
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1] || arr[i] == arr[i+1]) {
            count++;

            if(count>max) max = count;
            if (arr[i] < arr[i+1]  && i == n-2) {
                printf("d");
                max++; // last element
            }
        }
        else{
            count = 1;
        }
    }

    printf("%d",max);
}

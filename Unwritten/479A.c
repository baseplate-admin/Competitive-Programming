#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int a1 = a+b*c;
    int a2 = a*(b+c);
    int a3 = a*b*c;
    int a4 = (a+b)*c;
    int a5 = a+b+c;

    int arr[5] = {a1,a2,a3,a4,a5};
    int largest = arr[0];


    for(int i=0;i<5;i++){
        if(arr[i]>largest) largest = arr[i];
    }
    printf("%d",largest);
}



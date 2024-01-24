#include<stdio.h>

int main(){
    int size_of_array,index_to_check;

    scanf("%d %d",&size_of_array,&index_to_check);

    char str[100];
    scanf("%[^\n]%*c",str);

    printf("%d",&str);

    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int max=0;
    int no=0;

    for (int i = 0;i<n;i++){

        int a,b;
        scanf("%d %d",&a,&b);
        no = no-a;
        no = no+b;

        if (no>max){
            max = no;
        }
    }
    printf("%d",max);

}

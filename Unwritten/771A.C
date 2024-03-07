
#include <stdio.h>

int main(){
    int limak,bob;
    scanf("%d %d",&limak,&bob);

    int iteration = 0;

    while(limak <= bob ){
        limak = limak * 3;
        bob = bob * 2;
        iteration++;
    }

    printf("%d",iteration);

}

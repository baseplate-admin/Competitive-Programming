#include <stdio.h>
#include<stdlib.h>
int main(){

    int n,h;
    scanf("%d %d\n",&n,&h);

    char a[2*h];
    fgets(a,2*h,stdin);

    int b[n];
    int j=0;

    char* cha;
    cha = strtok(a," ");
    while(cha != NULL){
        b[j] = atoi(cha);
        printf("%d",b[j]);

        j++;
        cha = strtok(NULL," ");
    }
    int width = 0;

    for(int ii=0;ii<n;ii++){
        printf("%d,",b[ii]);
    }

    for (int l=0;l<n;l++){
        if(b[l]>h) {
            width=width+2;
        }
        else {
            width = width + 1;
        }
    }
    printf("\n%d",width);


}

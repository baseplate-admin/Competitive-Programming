#include <stdio.h>


int main(){
    int n,h;
    scanf("%d %d",&n,&h);
    char string[2*h];
    scanf("%s",&string);
    int width=0;
    char *token = strtok(string," ");
    while(token!= NULL){
        if ((int)token >= h){
            width=width+2;
        }else{
            width = width+1;
        }
    }
    printf("%d",width);


}

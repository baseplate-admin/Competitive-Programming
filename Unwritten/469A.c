#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int p[n];
    int q[n];

    int p_i=0;
    char temp;
    while(scanf("%d%c", &p[p_i], &temp)){
        p_i++;
        if(temp=='\n'){
            break;
        }
    }
    int q_i=0;
    while(scanf("%d%c", &q[q_i], &temp)){
        q_i++;
        if(temp=='\n'){
            break;
        }
    }

    for(int i=0;i<p_i;i++){
        int temp;
        if(p[i]>p[i+1]){
            temp = p[i];
            p[i] = p[i+1];
            p[i+1] = temp;
        }
    }
    for(int i=0;i<q_i;i++){
        int temp;
        if(q[i]>q[i+1]){
            temp = q[i];
            q[i] = q[i+1];
            q[i+1] = temp;
        }
    }



     if(p[n-1]==n || q[n-1]==n){
        printf("I become the guy.\n");
    }else{
        printf("Oh, my keyboard!\n");
    }

}

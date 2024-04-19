#include <stdio.h>



int main(){
    int n=0;
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


    int flag = 0;
    for(int i=1;i<=n;i++){
            int flag_1=0,flag_2=0;

            for(int j=1;j<p_i;j++){
                if(p[j] == i) {
                    flag_1 = 1;
                    break;
                }
            }
            if (flag_1 == 0){
                for(int j=1;j<q_i;j++){
                    if(q[j] == i){
                        flag_2 = 1;
                        break;
                    }
                }
                if(flag_2 == 0){
                    flag = 1;
                    break;

                }
            }


    }
    if(flag == 1){
        printf("Oh, my keyboard!");
    }else{
        printf("I become the guy.");
    }

}

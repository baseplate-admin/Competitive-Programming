#include <stdio.h>


void main(){
    int no_of_input,can_answer=0;

    scanf("%d",&no_of_input);

    while(no_of_input){
        int no_1,no_2,no_3,no_of_yes=0;
        scanf("%d %d %d",&no_1,&no_2,&no_3);
        if(no_1 ==1) no_of_yes++;
        if(no_2 == 1) no_of_yes++;
        if(no_3 == 1) no_of_yes++;

        if (no_of_yes >= 2) can_answer++;
        no_of_input--;
    }
    printf("%d",can_answer);
}
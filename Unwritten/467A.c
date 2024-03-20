#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int room=0;
    for(int _=0;_<n;_++){
        int p,q;
        scanf("%d %d",&p,&q);
        if((q-p)>=2){
            room++;
        }

    }
    printf("%d",room);

}

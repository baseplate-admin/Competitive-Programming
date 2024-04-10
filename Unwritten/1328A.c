#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int _=0;_<n;_++){
        int x,y;
        scanf("%d %d",&x,&y);

        int c = ceil((double)x/(double)y);
        printf("%d\n",(c*y)-x);
    }

}

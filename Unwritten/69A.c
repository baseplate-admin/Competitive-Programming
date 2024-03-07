#include <stdio.h>

int main(){
    int x=0,y=0,z=0;

    int no_of_turns;
    scanf("%d",&no_of_turns);

    for (int i =0;i<no_of_turns;i++){
        int _x,_y,_z;
        scanf("%d %d %d", &_x, &_y, &_z);

        x = x + _x;
        y = y + _y;
        z = z + _z;
    }
   if(x==0&&y==0&&z==0) printf("YES");
   else printf("NO");
}

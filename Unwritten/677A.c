#include <stdio.h>

int main()
{

    int n, h=0;
    scanf("%d %d\n", &n, &h);

    int b[n];

    for(int i=0;i<n;i++){
        scanf(" %d",&b[i]);
    }
    int width = 0;


    for (int l = 0; l < n; l++)
    {
        int num = (int)b[l];

        if (num  > h)
        {
            width = width + 2;
        }
        else
        {
            width = width + 1;
        }
    }
    printf("%d", width);
}

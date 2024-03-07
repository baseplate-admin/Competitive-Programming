#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

    int n, h=0;
    scanf("%d %d\n", &n, &h);

    char a[n];
    char ch;
    int chi=0;
    while(ch!='\n')    // terminates if user hit enter
    {
        ch=getchar();
        if(ch != " "){
            a[chi]=ch;
        }
        chi++;
    }

    int width = 0;


    for (int l = 0; l < n; l++)
    {
        if (b[l] > h)
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
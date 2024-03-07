#include <stdio.h>

int main(){
    // Inputs
    long long m, n,a;
    scanf("%I64d%I64d%I64d", &m, &n, &a);
    // Outputs
    long long x,y;
    if (m%a ==0){
        x = m/a;
    }else
    {
        x = (m/a)+1;
    }
    if(n%a == 0) {
        y = n/a;
    }else{
        y = (n/a)+1;
    }


    printf("%I64d", x*y);
}
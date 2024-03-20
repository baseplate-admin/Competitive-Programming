#include <stdio.h>

int main(){
    long long n,k;

    scanf("%lld %lld",&n,&k);

    long long arr[2*n];
    long long a_i=0;
    for (long long i=0;i<=n;i++){
        if(i%2!=0 && i!=0) {
            arr[a_i] = i;
            a_i++;
        }
    }

    for (long long i=0;i<=n;i++){
        if(i%2==0 && i!=0) {
            arr[a_i] = i;
            a_i++;
        }
    }


    printf("\n%d",arr[k-1]);

}

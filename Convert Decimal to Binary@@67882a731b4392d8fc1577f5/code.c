#include <stdio.h>

int main() {
    int r=0,N;
    scanf("%d",&N);
    while(N>=0){
        r=r*10+(N%2);
        N=N/2;
    }
    printf("%d",r);
    return 0;
}
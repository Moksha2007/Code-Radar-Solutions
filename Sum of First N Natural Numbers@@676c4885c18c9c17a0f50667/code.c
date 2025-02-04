#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1,sum=0;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
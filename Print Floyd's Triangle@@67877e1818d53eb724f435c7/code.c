#include <stdio.h>

int main() {
    int N,m=0,j=1;
    scanf("%d",&N);
    for(int i=1,k=1;i<=N;i++,k++){
        for(j;j<=i+m;j++){
           printf("%d ",j);
        }
        printf("\n");
        m=m+k;
    }
    return 0;
}
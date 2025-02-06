#include <stdio.h>

int main() {
    int N,m=0;
    scanf("%d",&N);
    for(int i=1,k=1;i<=N;i++,k++){
        for(int j=1;j<=i+m;j++){
           printf("%d ",j);
        }
        printf("\n");
        m=m+k;
    }
    return 0;
}
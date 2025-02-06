#include <stdio.h>

int main() {
    int N,j;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(j=0;j<i;j++){
            printf("%c ",65+j);
        }
        printf("\n");
        j=0
    }
    return 0;
}
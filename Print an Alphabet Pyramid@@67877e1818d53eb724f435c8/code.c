#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=0;j<i;j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }
    return 0;
}
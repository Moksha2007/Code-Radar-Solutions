#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int m=1;m<=i;m++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
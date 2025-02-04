#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int l=N;l>0;l--){
        for(int m=l;m>0;m--){
            printf("* ");
        }
        printf("\n");
    }
} 
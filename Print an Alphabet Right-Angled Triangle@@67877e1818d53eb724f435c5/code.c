#include <stdio.h>

int main() {
    int N;
    char a='A';
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            printf("%c ",a+i);
        }
        printf("\n");
    }
    return 0;
}
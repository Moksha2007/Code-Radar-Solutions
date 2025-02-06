#include <stdio.h>

int main() {
    int n,j;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
        j=1;
    } 
    return 0;
} 
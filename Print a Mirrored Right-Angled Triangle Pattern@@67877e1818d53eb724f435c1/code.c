#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(i=N;i<=1;i--){
        for(int j=1;j<=N;j++){
            if(i<=j){
                printf("* ");
            }
        }
    }
    return 0;
}
#include <stdio.h>

int main(){
    int N,r;
    scanf("%d",&N);
    while(N>=0){
        r=N%2;
        N=N/2;
    };
    if(r==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}
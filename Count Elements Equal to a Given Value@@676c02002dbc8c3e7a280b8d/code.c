#include <stdio.h>
int main(){
    int N,target,count=0;
    scanf("%d %d",&N,&target);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    for(int i=0;i<N;i++){
        if(arr[i]==target)
           count++;
    }
    printf("%d",count);
    return 0;
}
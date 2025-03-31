#include <stdio.h>
int main(){
    int N,target;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        if(arr[i]==target)
           printf("%d",i);
    }
    
    return 0;
}
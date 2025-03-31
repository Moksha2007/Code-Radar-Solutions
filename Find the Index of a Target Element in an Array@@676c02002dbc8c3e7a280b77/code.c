#include <stdio.h>
int main(){
    int N,target,m=1;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        m=0;
        if(arr[i]==target)
           printf("%d",i);
           m=1;
           break;
    }
    if(m==0)
        printf("-1");
    return 0;
}
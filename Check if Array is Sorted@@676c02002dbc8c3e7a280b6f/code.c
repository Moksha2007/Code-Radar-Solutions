#include <stdio.h>
int main(){
    int N,m=1;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            m=0;
            break;
        }
    }
    if(m=1)
       printf("Sorted");
    return 0;
}
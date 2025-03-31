#include <stdio.h>
int hello(int arr[]);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
       scanf("%d\n",&arr[i]);
    }
    int p=hello(arr);
    if(p==-1){
        if(arr[0]>arr[1])
            printf("%d",arr[0]);
        if(arr[N-1]>arr[N-2])
            printf("%d",arr[N-1]);
    }
}
int hello(int arr[],int N){
    for(int i=1;i<N-1;i++){
       if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
           printf("%d",arr[i]);
          break;
        }
        return -1;
     }
}
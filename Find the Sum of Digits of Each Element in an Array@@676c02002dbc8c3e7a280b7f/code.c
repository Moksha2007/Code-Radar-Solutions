#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    for(int i=0;i<N;i++){
        int sum=0;
        while(arr[i]>0){
            int r=arr[i]%10;
            sum+=r;
            arr[i]=arr[i]/10;
        }  
        printf("%d ",sum);
    }
    return 0;
}
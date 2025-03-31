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
        while(abs(arr[i])>0){
            int r=abs(arr[i])%10;
            sum+=r;
            abs(arr[i])=abs(arr[i])/10;
        }  
        printf("%d ",sum);
    }
    return 0;
}
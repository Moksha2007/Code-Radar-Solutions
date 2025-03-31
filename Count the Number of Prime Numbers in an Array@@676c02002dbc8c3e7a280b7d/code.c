#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }  
    int count=0;
    for(int i=0;i<N;i++){
        int h=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0)
               h++;
        }
        if(h==2)
           count++;
    }
    printf("%d",count);
    return 0;
}
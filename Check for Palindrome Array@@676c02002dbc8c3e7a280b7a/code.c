#include <stdio.h>
int main(){
    int N,a;
    scanf("%d",&N);
    int arr[N],arr1[N];
    arr1[N]=arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<=N/2;i++){
        a=arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=a;
    }
    if(arr1[N-1]==arr[N-1]) printf("YES");
    else printf("NO"); 
}
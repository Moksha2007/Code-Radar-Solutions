#include <stdio.h>
int main(){
    int N,a;
    scanf("%d",&N);
    int arr[N];
    int arr1[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
        arr1[i]=arr[i];
    }
    for(int i=0;i<=N/2;i++){
        a=arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=a;
    }
    if(arr1[N]==arr[N]) printf("YES");
    else printf("NO"); 
}
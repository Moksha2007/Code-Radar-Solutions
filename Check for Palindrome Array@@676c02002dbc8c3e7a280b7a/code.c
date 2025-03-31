#include <stdio.h>
int main(){
    int N,a;
    scanf("%d",&N);
    int arr[N];
    int arr1[N]=arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<=N/2;i++){
        a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=arr[i];
    }
    if(arr1[N]==arr[N]) printf("YES");
    else printf("NO");
}
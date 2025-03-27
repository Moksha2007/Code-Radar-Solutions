#include<stdio.h>

int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
}
#include <stdio.h>
int print(int x){
    int count=0;
    for(int j=1;j<=x;j++){
        if(x%j==0)
          count++;
    }
    if(count==2)
       printf("%d",x);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        print(i);   
    }
    return 0;
}
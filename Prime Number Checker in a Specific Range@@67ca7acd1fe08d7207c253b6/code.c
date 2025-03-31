#include <stdio.h>
int print(int x,int y){
    for(int i=x;i<=y;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
              count++;
        }
        if(count==2)
          printf("%d ",i);
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    print(a,b);
    return 0;
}
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }else{
        if(a==b!=c || b==c!=a || c==a!=b)
            printf("Isoscles");
        else
            printf("Equilateral");
    }
    return 0;
}
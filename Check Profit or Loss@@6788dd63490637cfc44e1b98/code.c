#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("Loss");
    else if(num1<num2)
        printf("Profit");
    else
        printf("No Profit No Loss");
    return 0;
}
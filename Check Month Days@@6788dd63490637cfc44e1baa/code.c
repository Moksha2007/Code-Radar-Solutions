#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case(1 || 3 || 5 || 7 || 10 || 12){
            printf("31");
            break;
        }
        case(4 || 6 || 8 || 9 || 11){
            printf("30");
            break;
        }
        case(2){
            printf("28");
            break;
        }
        default{
            printf("Invalid month");
        }
    }
    return 0;
}
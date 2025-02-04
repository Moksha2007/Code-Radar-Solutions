#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a==isupper())
        printf("Uppercase");
    else if(a==islower())
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}
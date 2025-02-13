#include <stdio.h>

int main() {
    char name[],hobby[];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}
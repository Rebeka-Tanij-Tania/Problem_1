#include <stdio.h>

int main() {
    char name[5];
    printf("Hello! What's your name?");
    scanf("%s",name);
    printf("Hi, %s",name);

    return 0;
}
#include <stdio.h>
int main(){
    int height, i, x;
    printf("Height");
    scanf("%d",&height);
    for(i=1;i<=height;i++){
        for(x=1;x<=height-i;x++){
            printf(" ");
        }
        for(x=1;x<=i;x++){
            printf("#");
        }
        printf("\n");
    }
}
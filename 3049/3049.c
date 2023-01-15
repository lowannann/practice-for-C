#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, user;
    scanf("%d",&user);

    for(j=0;j<user;j++){
        for(i=0;i<user-j;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
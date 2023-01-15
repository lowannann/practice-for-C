#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, user;
    scanf("%d",&user);
    
    for(j=0;j<5;j++){
        for(i=0;i<j+1;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
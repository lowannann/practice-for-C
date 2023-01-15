#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, user, space;
    scanf("%d",&user);

    for(j=0;j<user;j++){
        for(space=1;space<user-j;space++){
            printf(" ");
        }
        for(i=0;i<j+1;i++){      
            printf("*");
            
        }
        printf("\n");
    }

    return 0;
}
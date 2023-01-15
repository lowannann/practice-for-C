#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, user, space;
    scanf("%d",&user);

    for(j=0;j<user;j++){
        for(space=0;space<j;space++){
            printf(" ");
        }        
        for(i=0;i<user-j;i++){      
            printf("*");
            
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n;
    int total=0;
    

    scanf("%d",&n);

    for(i=1; i<=n; i++){
        total=total+i;
        if(i!=n){
            printf("%d+",i);
        }
        else{
            printf("%d",i);
        }
        
    }

    printf(" = %d\n",total);

    return 0;


}
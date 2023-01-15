#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, m, n, ans;
    scanf("%d",&m);
    scanf("%d",&n);
    for(j=1;j<m+1;j++){
        for(i=1;i<n+1;i++){
            ans=j*i;
            if(ans<10){
                printf("%d*%d= %d ",j,i,ans);                   
            }
            else{
                printf("%d*%d=%d ",j,i,ans);
            }
        }
        printf("\n");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){

    int i, j;
    int ary[N];
    int tmp;

    for(i=0;i<N;i++){
        scanf("%d", &ary[i]);
    }

    for(j=N;j>1;j--){
        for(i=0;i<j-1;i++){
            if(ary[i]>ary[i+1]){
                tmp = ary[i];
                ary[i] = ary[i+1];
                ary[i+1] = tmp;                
            }
        }
    }

    for(i=0;i<N;i++){
        printf("%d ", ary[i]);
    }


    return 0;
}
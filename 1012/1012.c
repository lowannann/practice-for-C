#include <stdio.h>
#include <stdlib.h>

int main(){


    int score, n;
    printf("(1)大學部 (2)研究所 : ");
    scanf("%d", &n);

    
    if (n!=1 && n!=2){
        printf("role error\n");
        return 0;
    }

    printf("請輸入您的成績：");
    scanf("%d", &score);
    
    if (score>=0 && score<=100){


        if(score>=60 && n==1){
        printf("pass\n");
        }
        else if(score>=70 && n==2){
        printf("pass\n"); 
        }
        else{
        printf("fail\n");
        }

    }
    else{
        printf("score error\n");
    }




    return 0;


}
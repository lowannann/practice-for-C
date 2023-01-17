#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printNum(char num){
            switch(num){
                case '0':
                    return 0;
                    break;
                case '1':
                    printf("壹");
                    return 1;
                    break;
                case '2':
                    printf("貳");
                    return 2;
                    break;
                case '3':
                    printf("參");
                    return 3;
                    break;
                case '4':
                    printf("肆");
                    return 4;
                    break;
                case '5':
                    printf("伍");
                    return 5;
                    break;
                case '6':
                    printf("陸");
                    return 6;
                    break;
                case '7':
                    printf("柒");
                    return 7;
                    break;
                case '8':
                    printf("捌");
                    return 8;
                    break;
                case '9':
                    printf("玖");
                    return 9;
                    break;
            }

}

int main(){

    int len;
    char n[100];
    scanf("%s",&n);

    int nn=atoi(n); //為了0,將char轉換為int(需要引入標頭檔<stdlib.h>)

    len=strlen(n);

    if (nn==0){
        printf("out of range\n");
        return 0;
    }

    switch (len){
        case 5:
            if (printNum(n[0])) printf("萬");
            if (printNum(n[1])) printf("仟");
            if (printNum(n[2])) printf("佰");
            if (printNum(n[3])) printf("拾");
        	printNum(n[4]);
        	printf("元整\n");
        	break;
        case 4:
        	if (printNum(n[0])) printf("仟");
        	if (printNum(n[1])) printf("佰");
        	if (printNum(n[2])) printf("拾");
        	printNum(n[3]);
        	printf("元整\n");
        	break;
        case 3:
        	if (printNum(n[0])) printf("佰");
        	if (printNum(n[1])) printf("拾"); 
        	printNum(n[2]);
        	printf("元整\n");
        	break;
        case 2:
        	if (printNum(n[0])) printf("拾");
        	printNum(n[1]);
        	printf("元整\n");
        	break;
        case 1:

        	printNum(n[0]);
        	printf("元整\n");
        	break;                


        default:
        	printf("out of range\n");
        	exit(0);
        	break;

    }







    return 0;
}
#include <stdio.h>
#define STUDENT 5
#define SUBJECT 3

int i, j;
int ary[STUDENT][SUBJECT] = {{76,73,85}
                            ,{88,84,76}
                            ,{92,82,92}
                            ,{82,91,85}
                            ,{72,74,73}};
int sum;
int total;

double new_ary[STUDENT];
double per_avg;
double tmp;
double compare_ary[STUDENT];

int main(){



    for(j=0;j<STUDENT;j++){   

        sum=0;
        printf("student %d\n",j+1);

        for(i=0;i<SUBJECT;i++){
            printf(" %d: %d\n",i+1,ary[j][i]);
            sum += ary[j][i];

        }

        printf(" sum: %d\n",sum);
        printf(" avg: %.2f\n", (double)sum/3);

        per_avg=(double)sum/3;
        new_ary[j]=per_avg;
        compare_ary[j]=per_avg;


    }

    for(j=0;j<STUDENT;j++){

        for(i=0;i<SUBJECT;i++){
            total+=ary[j][i];
        }
    }

    for(j=STUDENT;j>1;j--){
        for(i=0;i<j-1;i++){
            if(new_ary[i]>new_ary[i+1]){
                tmp=new_ary[i];
                new_ary[i]=new_ary[i+1];
                new_ary[i+1]=tmp;
            }
        }
    }

    printf("total: %d, avg: %.2f\n",total,(double)total/15);



    for(j=0;j<STUDENT;j++){
        if(compare_ary[j]==new_ary[4]){
            printf("highest avg: student %d: %.2f\n",j+1,new_ary[4]);
        }
    }



    return 0;
}



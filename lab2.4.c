#include <stdio.h>


void gpa(float a[5],int size){
    float sum ;
    for (int i=0;i<5;i++){
        sum = sum + a[i];
    }
    float gpa = sum / size ;
    printf("\n--------------");
    printf("\nGPA IS %.2f",gpa);
    printf("\n--------------");
}

int main (){
    float gpv[5];
    int a = 0 ;
    for (int i=1;i<=5;i++){
        printf("Enter GPV for SUBJECT %d : ", i);
        scanf("%f",&gpv[a]);
        if (gpv[a]>5.00){
            printf("\n -------------");
            printf("\n INVALID GPA !");
            printf("\n -------------");
            i = 0 ;
            printf("\n");
            continue;
        } else if(gpv[a]<0){
            printf("\n -------------");
            printf("\n INVALID GPA !");
            printf("\n -------------");
            printf("\n");
            i = 0 ;
            continue;
        }
        a++;
    }
    int size = sizeof(gpv) / sizeof(gpv[0]);
    gpa(gpv,size);
return 0 ;
}

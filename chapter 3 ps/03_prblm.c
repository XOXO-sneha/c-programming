#include <stdio.h>

int main(){
    float income,tax=0;
    printf("enter income amount:");
    scanf("%f",&income);
    if(income<=250000){
        tax=0;
    }
    else if(income>=250000 && income<500000){
        tax=0.05*income;
    }
    else if(income>=500000 && income<100000){
        tax=0.20*income;
    }
    else{
        tax=0.30*income;
    }
    printf("income = %f\n",income);
    printf("tax to be paid = %f\n",tax);
    return 0;
}

#include <stdio.h>
int main(){
    //int marks1=89;
    //int marks2=90;
    //int marks3=70;
    int marks[3];
    printf("enter m1:");
    scanf("%d",&marks[0]);
    printf("enter m2:");
    scanf("%d",&marks[1]);
    printf("enter m3:");
    scanf("%d",&marks[2]);

    printf("mar1=%d,mar2=%d,mar3=%d",marks[0],marks[1],marks[2]);
    return 0;
}

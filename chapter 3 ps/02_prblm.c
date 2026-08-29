#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("enter marks of subject 1:\n");
    scanf("%d",&marks1);
    printf("enter marks of subject 2:\n");
    scanf("%d",&marks2);
    printf("enter marks of subject 3:\n");
    scanf("%d",&marks3);
    printf("the marks are in %d %d %d \n", marks1, marks2, marks3);
    if (marks1<33||marks2<33||marks3<33){ //or||
        printf("you area failed due to less marks as mentioned:");
    }
    else if ((marks1+marks2+marks3)/3<40){
        printf("you are failed due to total %:");
    }
    else{
        printf("you passed:");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int marks;
    char grade;
    printf("enter the marks:");
    scanf("%d",marks);
    if(marks<=100 && marks>=90){
        printf("grade = 'A'",grade);
    }
    else if(marks<=90 && marks>=80){
        printf("grade = 'B'",grade);
    }
    else if(marks<=80 && marks>=70){
        printf("grade = 'C'",grade);
    }
    else if(marks<=70 && marks>=60){
       printf("grade = 'D'",grade);
    }
    else if(marks<=60 && marks>=50){
        printf("grade = 'F'",grade);
    }
    else {
        printf("grade = 'F'",grade);
    }
    
    return 0;
}

#include <stdio.h>
#include <string.h>
//user defined 
typedef struct student{
    char name[100];
    int roll;
    float cgpa;
}std;
int main(){
    std s1;
    s1.roll=67;
    s1.cgpa=9.88;
    strcpy(s1.name,"sneha");
    printf("rollno=%d\ncgpa=%f\nname=%s\n",s1.roll,s1.cgpa,s1.name);
    return 0;

}
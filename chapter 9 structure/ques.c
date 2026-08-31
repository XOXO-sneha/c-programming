#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1,s2,s3;
    s1.roll=2;
    s1.cgpa=8.76;
    strcpy(s1.name,"Yashi");

    s2.roll=4;
    s2.cgpa=9.76;
    strcpy(s2.name,"Riya");

    s3.roll=5;
    s3.cgpa=9.66;
    strcpy(s3.name,"Sneha");
    
   struct student{
    char name[100];
    int roll;
    float cgpa;
};
    printf("roll is %d\ncgpa is %f\nname is %s\n",s2.roll,s2.cgpa,s2.name);
    printf("roll is %d\ncgpa is %f\nname is %s\n",s3.roll,s3.cgpa,s3.name);
    return 0;
}

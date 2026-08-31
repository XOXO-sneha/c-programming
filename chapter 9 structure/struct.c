#include <stdio.h>
#include <string.h>
//user defined 
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    //s1.name="Sneha Mehta";//this can't be written in this form as uh have declared it in array form 
    s1.roll=46;
    s1.cgpa=9.555;
    strcpy(s1.name,"sneha");

    printf("student name: %s\n",s1.name);
    printf("student roll no: %d\n",s1.roll);
    printf("student cgpa: %f\n",s1.cgpa);

    return 0;
}

#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void print(struct student s1){
    printf("student info:\n");
    printf("std.roll is %d\n",s1.roll);
    printf("std.cgpa is %f\n",s1.cgpa);
    printf("std.name is %s\n",s1.name);
    //s1.roll=67;
}
int main(){
    struct student s1={"Sneha",46,9.878};
    //printf("roll is %d\n",s1.roll);
    s1.roll=66;//roll no will change from 46 to 66
    print(s1);
    return 0;
}

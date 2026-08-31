#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"Sneha",46,9.878};
    printf("roll is %d\n",s1.roll);

    struct student *ptr=&s1;
    printf("roll is %d\n",(*ptr).roll);
    printf("std->roll is %d\n",ptr->roll);
    printf("std->cgpa is %f\n",ptr->cgpa);
    printf("std->name is %s\n",ptr->name);

    return 0;
}

#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student ECE={"Sneha",46,9.878};
    printf("roll is %d\ncgpa is %f\nname is %s\n",ECE.roll,ECE.cgpa,ECE.name);

    return 0;
}

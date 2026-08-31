#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll=18181;
    ece[0].cgpa=9.3;
    strcpy(ece[0].name,"sneha");
    printf("roll is %d\ncgpa is %f\nname is %s\n",ece[0].roll,ece[0].cgpa,ece[0].name);

    ece[1].roll=10081;
    ece[1].cgpa=8.3;
    strcpy(ece[1].name,"ishiha");
    printf("roll is %d\ncgpa is %f\nname is %s\n",ece[1].roll,ece[1].cgpa,ece[1].name);
    
    ece[2].roll=19871;
    ece[2].cgpa=7.88;
    strcpy(ece[2].name,"yshiha");
    printf("roll is %d\ncgpa is %f\nname is %s\n",ece[2].roll,ece[2].cgpa,ece[2].name);

    ece[3].roll=17651;
    ece[3].cgpa=8.9;
    strcpy(ece[3].name,"yana");
    printf("roll is %d\ncgpa is %f\nname is %s\n",ece[3].roll,ece[3].cgpa,ece[3].name);

    ece[4].roll=14531;
    ece[4].cgpa=8.56;
    strcpy(ece[4].name,"ishu");
    printf("roll is %d\ncgpa is %f\nname is %s\n",ece[4].roll,ece[4].cgpa,ece[4].name);
    
    return 0;
}

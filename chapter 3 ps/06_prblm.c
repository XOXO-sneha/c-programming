#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("enter the number:\n");
    scanf("%d",&b);
    printf("enter the number:\n");
    scanf("%d",&c);
    printf("enter the number:\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("a is greater\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is greater\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is greater\n");
    }
    else{
        printf("d is greater\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    char ch;
    printf("enter the character:%c\n",ch);
    scanf("%c",&ch);
    printf("the value of character is %d\n",ch);//ASCI Value it can be of lower,upper and special case 
    //97,122
    if(ch>=97 && ch<=122){
        printf("this character is lowercase\n");
    }
    else{
        printf("this is not upper case\n");
    }
    return 0;
}

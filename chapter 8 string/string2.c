#include <stdio.h>
void Name(char arr[]);
int main(){
    // char firstname[50];
    // scanf("%s",firstname);
    // printf("your name is %s",firstname);
    char fullname[100];
    scanf("%s",fullname);
    printf("your full name is %s",fullname);
    return 0;
}
void Name(char arr[]){
    for(int i =0 ;arr[i]!='\0';i++){
    printf("%c",arr[i]);
    }
}

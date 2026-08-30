//find the salted form of a password entered by user if the salt is '123' & added at thr end
#include <stdio.h>
#include <string.h>
void salt(char password[]);
int main(){
    char password[100];
    printf("enter pass: ");
    scanf("%s",password);
    salt(password);
    printf("salted password: %s",password);
    return 0;
}
void salt(char password[]){
    char salt[]="123";
    char newpass[200];
    strcat(password,salt);// pass="test"+salt
}

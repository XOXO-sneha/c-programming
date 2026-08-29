#include <stdio.h>
void pName(char arr[]);
int main(){
    char firstname[]="Sneha";
    char lastname[]="Mehta";
    pName(firstname);
    pName(lastname);
    return 0;
}
void pName(char arr[]){
    for(int i =0 ;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

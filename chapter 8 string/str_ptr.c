#include <stdio.h>
void Ps(char arr[]);
int main(){
    char *str="Sneha Mehta";
    puts(str);
    str="Sneha";
    puts(str);

    // char _str[]="Sneha Mehta";
    // puts(_str);
    // _str="Sneha";//array cannot be modified but pointers can 
    // puts(_str);
    return 0;
}

void Ps(char arr[]){
    for(int i=0; arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

#include <stdio.h>
void pS(char arr[]);
int main(){
    char str[10];
    gets(str);
    puts(str);
    fgets(str,100,stdin);
    puts(str);
    return 0;
}
void pS(char arr[]){
    for(int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

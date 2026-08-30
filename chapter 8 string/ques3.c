#include <stdio.h>
//write a func named slice, which tkaes a string & returns a sliced string from index n to m
void slice(char str[],int n,int m);
int main(){
    char str[]="Sneha";
    slice(str,1,4);
    printf("%s",str);
    return 0;
}

void slice(char str[],int n,int m){
    int i;
    for(i=0; n+i<m;i++){
        str[i]=str[n+i];
    }
    str[i]='\0';
}

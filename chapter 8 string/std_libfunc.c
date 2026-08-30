#include <stdio.h>
#include <string.h>
int main(){
    char name[]="sneha";
    int len=strlen(name);
    printf("Name length is:%d\n",len);
    // method 2
    char _name[100];
    fgets(_name,100,stdin);
    int i=0;
    while(_name[i]!='\0'){
        i++;
    }
    printf("length is %d\n",i);

    //strcpy(newStr,oldStr)
    char str1[]="Sneha";
    char str2[20]="Yashi";
    strcpy(str2,str1);
    puts(str2);

    //strcat(first,sec)
    char stra[100]="Sneha ";
    char strb[]="Mehta";
    strcat(stra,strb);
    puts(stra);

    //strcmp(first,sec)
    char N1[]="Apple";
    char N2[]="Banana";
    printf("%d",strcmp(N1,N2));
    return 0;
}

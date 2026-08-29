#include <stdio.h>
//int sum(int a,int b);
//int sum(int a,int b){
    //return a+b;
//}
//int main(){
    //int a,b;
    //printf("enter first no:");
    //scanf("%d",&a);
    //printf("enter second no:");
    //scanf("%d",&b);

    //int s=sum(a,b);
    //printf("sum is %d",s);
    //return 0;
//}

void table(int n);
void table(int n){ //parameter/formal parameter 
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}

int main(){
int n;
printf("enter the no:");
scanf("%d",&n);
table(n); //actual parametet/argument
return 0;
}
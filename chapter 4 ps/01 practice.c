#include <stdio.h>

int main(){
    //int n=10;
    //int i;
    //for(int i=0;i<=n;i++){
        //printf("the value from 0 to 10 is %d\n",i);
    //}
    //printf("%d\n",i++)(post increment)
    //printf("%d\n",++i)(pre increment)
    //printf("%d\n",i--)(post decrement)
    //printf("%d\nv ",--i)(pre decrement)
    //for(char i='a';i<='z';i++){
        //printf("alphabet a to z is %c",i);
    //}
    
    //int n;
    //int i=0;
    //printf("enter the number:");
    //scanf("%d\n",&n);
    //while(i<=n){
        //printf("%d\n",i);
        //i++;
    //}
    //return 0;

    //int n=4;
    //int i=0;
    //int sum=0;
    //do{
        //i++;
        //printf("the sum of %d\n",sum);
    //}while(i<=n);
    //return 0;

    //int n;
    //int sum=0;
    //printf("enter the number:");
    //scanf("%d",&n);
    //int i=1;
    //while(i<=n){
        //sum=sum+i;
        //i++;
    //}
    //printf("the sum of the number is %d\n",sum);
    //return 0;

    //int n;
    //printf("enter ht no.:");
    //scanf("%d",&n);
    //for( int i=1;i<=10;i++){
        //printf("%dx%d=%d",n,i,n*i);
    //}
    int n;
    do{
        printf("enter a no.:");
        scanf("%d",&n);
        printf("%d\n",n);
        if( n%2==0){
           break;
        }
    }while(1);
    printf("thank you");

    return 0;
}

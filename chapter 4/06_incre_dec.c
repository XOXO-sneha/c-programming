#include <stdio.h>

int main(){
    int i = 5;
    printf("the value of i is %d\n",i);

    i =i+5;//10
    printf("the value of i is %d\n",i);

    i++;//11
    printf("the value of i is %d\n",i);

    printf("the value of i is %d\n",i++);//11
    printf("the value of i is %d\n",i);//12

    i+=2;//sum as i=i+2


    //i++ prints first and then increments i(post increment operator)
    //++1 increment first and then decrement(post increment operator)
    return 0;
}

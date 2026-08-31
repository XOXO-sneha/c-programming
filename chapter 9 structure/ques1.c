#include <stdio.h>
#include <string.h>
struct address{
    int house;
    char block[50];
    char city[50];
    char state[100];
};
void printadd(struct address add);
int main(){
   struct address add[5];
   printf("enter info for person1: ");
   scanf("%d\n%s\n%s\n%s",add[0].house,add[0].block,add[0].city,add[0].state);
   printf("enter info for person2: ");
   scanf("%d\n%s\n%s\n%s",add[1].house,add[1].block,add[1].city,add[1].state);
   printf("enter info for person2: ");
   scanf("%d\n%s\n%s\n%s",add[2].house,add[2].block,add[2].city,add[2].state);
   printf("enter info for person2: ");
   scanf("%d\n%s\n%s\n%s",add[3].house,add[3].block,add[3].city,add[3].state);
   printf("enter info for person2: ");
   scanf("%d\n%s\n%s\n%s",add[4].house,add[4].block,add[4].city,add[4].state);
   printadd(add[0]);
   printadd(add[1]);
   printadd(add[2]);
   printadd(add[3]);
   printadd(add[4]);
    return 0;
}
void printadd(struct address add){
    printf("Address is = %d,%s,%s,%s",add.house,add.block,add.city,add.state);
}

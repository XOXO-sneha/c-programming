#include <stdio.h>
int calPer(int science, int math, int sanskrit);

int main(){
    int sc =98;
    int math=88;
    int sanskrit=90;
    printf("percentage is %d", calPer(sc,math,sanskrit));
    return 0;
}
int calPer(int science, int math, int sanskrit){
    return((science+math+sanskrit)/3);
}

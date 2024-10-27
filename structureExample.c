#include<stdio.h>
int main(){
    struct time{
        int h,m,s;
    } t1,t2;
    printf("\n Priting sum of t1 and t2 ");
    printf("\n Starting program ");
    // t1 values
    printf("\n Type T1 values ");
    
    printf("\n Input number of Hours");
    scanf("%d",&t1.h);
    
    printf("\n Input number of Minutes");
    scanf("%d",&t1.m);
    
    printf("\n Input number of Seconds");
    scanf("%d",&t1.s);
    
    printf("\n T1 values %d hours ,%d Minutes and %d Seconds",t1.h,t1.m,t1.s);
    // printf("Type T2 values for hours , mintues and seconds");
    // scanf("Hours: %d Minutes: %d Seconds : %d",&t2.h,&t2.m,&t2.s);
    
    return 0;
}
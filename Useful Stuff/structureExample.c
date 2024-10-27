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
    
    // t2 values
    printf("\n Type T2 values ");
    
    printf("\n Input number of Hours");
    scanf("%d",&t2.h);
    
    printf("\n Input number of Minutes");
    scanf("%d",&t2.m);
    
    printf("\n Input number of Seconds");
    scanf("%d",&t2.s);
    
    
    printf("\n T2 values %d hours ,%d Minutes and %d Seconds",t2.h,t2.m,t2.s);

    // trying to do sum
    int hours=t1.h+t2.h;
    int minutes = t1.m+t2.m;
    int seconds = t1.s+t2.s;
    
    printf("\n Total sum of hours is %d , minutes is %d and seconds is %d",hours,minutes,seconds);
    
    
    return 0;
}
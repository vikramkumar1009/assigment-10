//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int sinterest(int p,int r,int t);
int main()
{
    int p,r,t;
    //p= principle
    //= rate of interest
    //t=time
    printf("enter  principle, rate of interest, time to find simple interest ");
    scanf("%d%d%d",&p,&r,&t);
    sinterest(p,r,t);
    printf("Simple interest is %d",sinterest(p,r,t));
    return 0;
}
int sinterest(int p,int r,int t)
{
    int si;
    si=p*r*t/100;
    return (si);
}

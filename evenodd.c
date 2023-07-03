
#include<stdio.h>
int evenodd(int a);
int sinterest(int p,int r,int t);
int main()
{
    int x;
    //p= principle
    //= rate of interest
    //t=time
    printf("enter  number to check even odd ");
    scanf("%d",&x);
    evenodd(x);
    if(evenodd(x)==1)
        printf("number is odd");
    else printf("number is even");
   return 0;
}
int evenodd(int a)
{
    a=a&1;
   if(a==1)
    return 1;
    else return 0;
}

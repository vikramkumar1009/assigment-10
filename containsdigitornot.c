//Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int containsdigit(int n,int digit);
int containsdigit(int n,int digit)
{
    int r;
    while(n != 0)
    {
        r=n%10;
        if(r==digit)
        return 1;
        n=n/10;
    }
    return 0;


}
int main()
{
    int n,c,digit;
    printf("enter value of n and digit  ");
    scanf("%d%d",&n,&digit);
    c=containsdigit(n,digit);
    if(c==1)
    printf("number contains digit");
    else printf("number not contains given digit");
     return 0;
}

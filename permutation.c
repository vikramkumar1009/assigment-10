//Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int arrang(int a,int r);
int main()
{
    int n,r,c;
    printf("enter  value of n and r ");
    scanf("%d%d",&n,&r);
    c=arrang(n,r);
    printf("combination of %d and %d is %d ",n,r,c);

       return 0;
}
int fact(int a)
{
    int x,f=1;
 for(x=1;x<=a;x++)
   {
       f=f*x;

   }
      return f;

}
int arrang(int n,int r)
{
    int c;
    c=fact(n)/(fact(n-r));
    return c;
}

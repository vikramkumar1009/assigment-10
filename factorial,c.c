//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int a);
int main()
{
    int n,fc;
    printf("enter  value of n ");
    scanf("%d",&n);
    fc=fact(n);
    printf("factorial of %d is %d",n,fc);

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

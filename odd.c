
#include<stdio.h>
void nodd(int a);
int main()
{
    int n;
    printf("enter  value of n ");
    scanf("%d",&n);
    nodd(n);
       return 0;
}
void nodd(int a)
{
    int x;
 for(x=1;x<=a;x++)
   {

     printf("%d\n",x*2-1);
   }

}


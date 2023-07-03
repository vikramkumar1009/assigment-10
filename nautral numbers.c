
#include<stdio.h>
void nnatural(int a);
int main()
{
    int n;
    printf("enter  value of n ");
    scanf("%d",&n);
    nnatural(n);
       return 0;
}
void nnatural(int a)
{
    int x;
 for(x=1;x<=a;x++)
   {
     printf("%d\n",x);
   }

}

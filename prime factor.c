//Write a function to print all prime factors of a given number.
//For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void primefact(n);
void primefact(n)
{
    int i;
    for(i=2;i != 1;i++)
    {
        while(n%i==0)
        {
            n = n/i;
             printf("%d ",i);
        }break;
    }

}
int main()
{
    int n;
    printf("enter value of n to get prime factor ");
    scanf("%d",&n);
    primefact(n);
     return 0;
}

//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float Lcm(float r,float a);
int main()
{
    int r,a;
    printf("enter radius of circle to find area ");
    scanf("%d",&r);
    Lcm(r,a);
    printf("Area of circle is %f",Lcm(r,a));
    return 0;
}
float Lcm(float r,float a)
{
    a=3.14*r*r;
    return (a);
}

/*Program to find area of a circle*/
#include<stdio.h>
#define pi 3.142
int main ()
{
    float radius,area;
    printf("\n Enter value of radius:");
    scanf("%f",&radius);
    area=3.142*radius*radius;
    printf("The area is %f",area);
    return 0;
    
}
/*Program to calculate compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
    float t,r,p,CI;
    printf("\nEnter the principal amount");
    scanf("%f",&p);
    
    printf("\nEnter time value");
    scanf("%f",&t);
    
    printf("\nEnter rate value");
    scanf("%f",&r);
    
    CI=p * pow((1+r),t);
    //pow(2,8)
    printf("interest = %7.2f",CI);
    return 0;
}
//program to return volume of a sphere using function
#include<stdio.h>
#define pi 3.142
float volume(float r);
int main()
{
    float r, volume;
    printf("\nenter the value of r");
    scanf("%f",&r);
    volume =4/3 * pi*r*r*r;
    printf("the volume is %f",volume);
    
    return 0;
}
 float volume(float r){
     float volume;
     volume=4/3*pi*r*r*r;
     return volume;
 }


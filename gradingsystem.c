/*Grading system*/
#include<stdio.h>
int main ()
{
    int accounting,programming,calculus,average;
    printf("\nEnter value of accounting,programming and calculus:");
    scanf("%d%d%d",&accounting,&programming,&calculus);
    average=(accounting+programming+calculus)/3;
    if(average>=70 && average<=100)
    {
    printf("it is an A");
    }
    else if(average>=60 && average<=69){
        printf("it is a B");
    }
    else if(average>=50 && average<=59){
       printf("it is a C");
    }
    else if(average>=40 && average<=49){
        printf("it is a D");
    }
    else if(average>=0 && average<=39){
        printf("it is an E");
    }
    
    return 0;
}
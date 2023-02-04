//Determining a positive or a negative number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a nummber:");
    scanf("%d",&num);
    if(num>=0){
        printf("it is positive number");
    }
    else{
        if(num<=0)
        printf("it is a negative number");
    }
    
    return 0;
}

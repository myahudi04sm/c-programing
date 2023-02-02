//Bank loan
#include<stdio.h>
int main () {
    int age, salary;
    printf("Enter your age in years and salary:");
    scanf("%d%d", &age, &salary);
    if (age>=21 &&salary>=21000){
        printf("congratulations you qualify for a loan");
    }
    else{
        printf("unfortunately you dont qualify for a loan");
    }
    
    return 0;
}
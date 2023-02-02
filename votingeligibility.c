//Eligibility to vote
#include<stdio.h>
int main () {
    int age;
    printf("Enter your age in years and nationality:");
    scanf("%d", &age);
    if (age>=18){
        printf("congratulations you are eligible to vote");
    }
    else{
        printf("unfortunately you are not eligible to vote");
    }
    
    return 0;
}
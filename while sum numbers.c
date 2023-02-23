//Sum of natural numbers
#include <stdio.h>
int main()
{
    int n = 15, sum = 0;
    while (n>0){
    printf("%d " , n);
    n = n - 1;
    sum = sum + n;
    }
    printf("\n the sum is %d", sum);

    return 0;
}

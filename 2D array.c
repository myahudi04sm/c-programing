#include<stdio.h>
int main()
{
    int i,j,max[2][3]={{1,4,6},{3,2,7}};
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
    { 
        printf("%d ",max[i][j]);
    }
    
    return 0;
}

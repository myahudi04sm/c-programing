#include<stdio.h>
int main()
{
    int i,r,c,max[2][3][3]={{{1,4,6},{3,2,7},{4,5,6},{7,8,1},{11,12,10},{6,4,8}}};
    for(i=0;i<2;i++)
        for(r=0;r<3;r++)
        for(c=0;c<3;c++)
    { 
        printf("%d ",max[i][r][c]);
    }
    
    return 0;
}

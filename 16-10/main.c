#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j;
    printf("Enter the matrix : ");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    int max=0,ind;
    for(i=0; i<3; i++)
    {
        int sum=0;
        for(j=0; j<3; j++)
            if(a[i][j]==1)
                sum++;
        if(sum>max)
        {
            max=sum;
            ind=i;
        }
    }
    printf("The row with maximum number of 1s : %d",ind+1);
    return 0;
}

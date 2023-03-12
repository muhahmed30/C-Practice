#include <stdio.h>
#include <string.h>

//Author: Muhammad Ahmed
//Purpose: Practicing 2-D Arrays

int main()
{

    //int a[2][3]= {1,2,3,4,5,6};
    //int a[2][3]= {{1,2,3}, {4,5,6}};
    int a[2][3], i, j;
    printf("Enter the elemets \n");

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

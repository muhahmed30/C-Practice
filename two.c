//Author: Muhammad Ahmed
//Purpose: Delete an array from a string

#include <stdio.h>
#include <string.h>


//Step 1: Deleting element from array at input from user

int main ()
{
    int a[50], size, i, pos;
    printf("Enter size of array \n");
    scanf("%d", &size);
    printf("Enter elements of array \n");
    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<size; i++)
    {
        printf("Array [%d] is %d \n", i, a[i]);
    }
/*
    printf("Enter array position you want to delete \n");
    scanf("%d", &pos);

    for (i=pos-1; i<size-1; i++)
    {
        a[i] = a[i+1];
    }
    size--;

    for (i=0; i<size; i++)
    {
        printf("The new Array element of [%d] is %d \n", i, a[i]);
    }

    return 0;
}

//Step 2: Deleting Array from the first element
    for (i=0; i<size; i++)
    {
        a[0] = a[0+1];
    }
    size--;

    for (i=0; i<size; i++)
    {
        printf("New Elemet array [%d] is %d \n", i, a[i]);
    }*/


//Step 3: Deleting Array from last value
    size--;
     for (i=0; i<size; i++)
    {
        printf("New Elemet array [%d] is %d \n", i, a[i]);
    }


    return 0;
}

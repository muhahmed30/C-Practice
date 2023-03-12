//Author: Muhammad Ahmed
//Purpose: Practicing on Arrays (traversing, insertion)

#include <stdio.h>
#include <string.h>

// Step 1
/* Make an array from values inputted by user, and print them
int main()
{
int a[50], size, i;

printf("Enter the size of array you want\n");
scanf("%d", &size);

printf("Enter the elements of the array\n");

for (i=0; i<size; i++)
{
    scanf("%d", &a[i]);
}

for (i=0; i<size; i++)
{
    printf(("Element of [%d] is %d \n"), i, a[i]);
}


    return 0;
} */

//Step 2
/*Insert value inside an existing array
int main ()
{
    int a[50], size, i, pos, num;
    printf("Select Size of array\n");
    scanf("%d", &size);
    printf("Elements of the array\n");

    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<size; i++)
    {
        printf("Elements of array [%d] are %d \n", i, a[i]);
    }

    printf("Enter position where you want to insert value \n");
    scanf("%d", &pos);
    printf("Enter the number you would like to add \n");
    scanf("%d", &num);

    for (i=size-1; i>=pos-1; i--)
    {
        a[i+1]= a[i];
    }
    a[pos-1] = num;
    size++;

      for (i=0; i<size; i++)
    {
        printf("Elements of array [%d] are %d \n", i, a[i]);
    }

    return 0;
}*/

//Step 3: Inserting new Value at first position
/*int main()
{
    int a[50], i, pos, num, size;
    printf("Enter array size\n");
    scanf("%d", &size);
    printf("Enter elements of array \n");

    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        printf("The array element [%d] is %d \n", i, a[i]);
    }

    printf("Enter the new value \n");
    scanf("%d", &num);
    for (i=size-1; i>=0; i--)
    {
        a[i+1]= a[i];
    }
    a[0]= num;
    size++;

    for (i=0; i<size; i++)
    {
        printf("The element array [%d] is %d \n", i, a[i]);
    }

    return 0;
}*/

//Step 4
//Inserting value at the end of the array
int main()
{
    int a[50], size, i, pos, num;
    printf("Enter array size \n");
    scanf("%d", &size);
    printf("Enter element values \n");

    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        printf("The array element [%d] is %d \n", i, a[i]);
    }

    printf("Enter the element you want to add \n");
    scanf("%d", &num);

    a[size]=num;
    size++;

    for (i=0; i<size; i++)
    {
        printf("The array element [%d] is %d \n", i, a[i]);
    }

    return 0;
}

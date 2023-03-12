#include <stdio.h>
#include <string.h>
//Author: Muhammad Ahmed
//Purpose: Practicing Pointers

int main()
{
    /*int b = 10;
    int *q;
    q= &b;
    printf("%d \n", *q);

    int a[]= {1,2,3,4,5};
    int *p;
    p= a;
    printf("%d \n", *p);

    int a[]= {1,2,3,4,5};
    int *p;
    p=a;
    printf("%d \n", *a);
    printf("%p \n", a);
    printf("%d \n", *p);
    printf("%p \n", p);
    printf("%p \n", a);

    int a[]= {1,2,3,4,5};
    int *q;
    q=a;

    printf("%p \n", q); // address of a (pointer poiting to address)
    printf("%p \n", a); // address of a
    printf("%d \n", *a); // value of a
    printf("%p \n", &q); //address of pointer q
    printf("%d \n", *q); //value at a (pointer pointing to the value inside the address a)
    //q++;  adding q by 1 increment
    printf("%p \n", q); // printing address of a + 1 using pointer q
    printf("%d \n", a[2]); // printing value of array at position 2
    printf("%d \n", *(a+2)); // printing value of array at position 2
    printf("%d \n", *(q+2)); // printing value of array at position 2
    printf("%p \n", (q+2)); // printing address of a base address plus 2 incrememnts*/

    /*int a[5];
    int *p;
    int i;
    p=a;

    printf("Enter elements \n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0; i<5; i++)
    {
        //printf("%d \n", a[i]);
        //printf("%p \n", p);
        printf("%p \n", p);*/
    }


    int a[5], i;
    int *q;
    q=a;
    printf("Enter elements of array \n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<5; i++)
    {
        //printf("%d\n", a[i]);
        printf("%d \n", *(q+i));
    }

    return 0;
}

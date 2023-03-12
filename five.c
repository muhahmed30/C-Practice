#include <stdio.h>
#include <string.h>

//Author: Muhammad Ahmed
//Purpose: Accessing 2D Arrays via Pointers

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int *p;
    p= &a[0][0];
    printf("%d \n", *a[0]);
    printf("%p \n", a[0]);
    printf("%p \n", p);
    printf("%p \n", &p);
    printf("%p \n", &a[1]);

    return 0;
}

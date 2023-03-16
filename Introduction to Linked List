#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Author: Muhammad Ahmed
//Purpose: Introduction to Linked List

int main (void)
{

    struct node
    {
        int data;
        struct node *next;
    };

    //declaring nodes
    struct node *a,*b,*c;

    //Implement task 1 here
    a= malloc(sizeof(struct node));
    b= malloc(sizeof(struct node));
    c= malloc(sizeof(struct node));
    a->data = 100;
    b->data = 200;
    c->data = 300;

    //Implement task 2 here
    c->next= a;
    a->next= b;
    b->next= NULL;

    //Don't change the below code
    struct node *temp = c;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    /*struct node
    {
        int a;
        struct node *next;
    }*/

    //Sequential data
    //Easy to insert and delete elements
    //Must store space for pointer
    //Have to traverse to find element
    //Binary search not possible
    return 0;
}

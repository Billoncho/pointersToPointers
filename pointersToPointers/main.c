/*
Author:     Billy Gene Ridgeway
Date:       October 18th. 2022
Purpose:    Practicing pointers to pointers in C.
*/

#include<stdio.h>

int main()
{
    int X = 5;
    int *P = &X;
    *P = 6;
    int **Q = &P;
    int ***R = &Q;

    printf("\n  *P points to value held in X: %d\n", *P);
    printf("  *Q points to value held in P: %d\n", *Q);
    printf(" **Q points to the value held in X: %d\n", *(*Q));
    printf(" **R points to the value held in P: %d\n", *(*R));
    printf("***R points the the value held in X; %d\n", *(*(*R)));

    return 0;
}
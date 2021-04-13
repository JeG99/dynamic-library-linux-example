#include <stdio.h>
#include "tools.h"

void printMatrix(int nrow, int ncol, int* matrix){
    for(int i=0; i < nrow*ncol; i++){
        if (i%ncol == 0){
            printf("\n");
        }
        printf("%d \t", *(matrix+i));
    }
    printf("\n");
}

void fillMatrix(int nrow, int ncol, int*matrix){
    for(int i=0; i < nrow*ncol; i++){
        *(matrix+i) = i;
    }
}

void sum(int nelements, int* vector)
{
    int result = 0;
    for(int i=0; i<nelements; i++){
        result+= *(vector+i);
    }
    printf("%d\n", result);
}

void product(int nelements, int* vector)
{
    int result = 1;
    for(int i=0; i<nelements; i++){
        result*= *(vector+i);
    }
    printf("%d\n", result);
}

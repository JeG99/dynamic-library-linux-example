#include <stdio.h>
#include <stdlib.h>
#include "lib/funcapply.h"
#include "lib/tools.h"

// USER DEFINED MATRIX

int main(int argc, char const *argv[])
{
    int nrows, ncols, oper, direction;
    int *mat;
    void (*operation) (int, int*);

    printf("Input the rows and columns separated by a space\n");
    scanf("%d %d", &nrows, &ncols);

    printf("Choose between sum(0) or product(1)\n");
    scanf("%d", &oper);

    printf("Row-wise(0) or column-wise(1)\n");
    scanf("%d", &direction);
    
    mat = (int *)malloc(nrows*ncols*sizeof(int));

    if(oper == 0){
        operation = sum;
    } else{
        operation = product;
    }

    fillMatrix(nrows, ncols, mat);

    printf("Matrix \n");
    printMatrix(nrows, ncols, mat);

    printf("Apply result\n");
    apply(nrows, ncols, mat, operation, direction);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "lib/funcapply.h"
#include "lib/tools.h"

// USER DEFINED MATRIX

int main(int argc, char const *argv[])
{
    int nrows, ncols, oper, direction;
    void (*operation) (int, int*);

    printf("Choose between sum(0) or product(1)\n");
    scanf("%d", &oper);

    printf("Row-wise(0) or column-wise(1)\n");
    scanf("%d", &direction);

    if(oper == 0){
        operation = sum;
    } else{
        operation = product;
    }

    // replaced fillMatrix(nrows, ncols, mat); with a static fill
    nrows = 3;
    ncols = 6;
    int mat[] = {  3,   1,   6, -11, 100,  34, 
	     2,   5,   1, 523,  54, 177,
    	    55, 120,   2,  16, -55, -18};

    printf("Matrix \n");
    printMatrix(nrows, ncols, mat);

    printf("Apply result\n");
    apply(nrows, ncols, mat, operation, direction);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "funcapply.h"

void apply(int nrow, int ncol, int*mat,  void (*operation)(int, int*), enum _direction direction){
    if (direction == ROW){
        int * vector = malloc(sizeof(int)*ncol);
        for (int i=0; i<nrow; i++){
            for(int j=0; j<ncol; j++){
                *(vector+j) = *( mat+j+(i*ncol) );
            }
            operation(ncol, vector);
        }
    } else if(direction == COLUMN){
        int * vector = malloc(sizeof(int)*nrow);
        for (int i=0; i<ncol; i++){
            for(int j=0; j<nrow; j++){
                *(vector+j) = *(mat+i+(j*ncol) );
            }
            operation(nrow, vector);
        }

    }
}

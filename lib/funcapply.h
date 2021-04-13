#ifndef APPLY_H_
#define APPLY_H_

enum _direction {ROW, COLUMN};

void apply(int nrow, int ncol, int*mat,  void (*operation)(int, int*), enum _direction direction);

#endif

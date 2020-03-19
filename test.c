#include <stdio.h>

void f(int y){
  int z, x; 
  spawn b z = 4 * y; 
  x = 4 * y; 
  sync b; 
  printf("x + z = %d\n", x + z);
}


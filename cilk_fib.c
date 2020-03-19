#include<stdlib.h>
#include<stdio.h>
#include<cilk/cilk.h>

int fib(int n){
  int x, y; 
  if(n < 2) return 1; 
  cilk_spawn { x = fib(n-1); }
  cilk_spawn { y = fib(n-1); }
  cilk_sync; 
  return x + y; 
}

int main(int argc, char** argv){
  printf("%d \n", fib(argc > 1 ? atoi(argv[1]) : 10));
}



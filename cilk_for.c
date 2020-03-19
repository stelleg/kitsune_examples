#include<stdlib.h>
#include<stdio.h>
#include<cilk/cilk.h>

void f(int n){
  cilk_for(int i=0; i<n; i++) {
    printf("%d\n", i);
  }
}

int main(int argc, char** argv){
  f(argc > 1 ? atoi(argv[1]) : 10);
}



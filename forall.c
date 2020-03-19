#include<stdlib.h>
#include<stdio.h>
#include<kitsune.h>

void f(int n){
  forall(int i=0; i<n; i++) {
    printf("%d\n", i);
  }
}

int main(int argc, char** argv){
  f(argc > 1 ? atoi(argv[1]) : 10);
}



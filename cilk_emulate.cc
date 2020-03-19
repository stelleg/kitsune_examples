#include<kitsune.h>
#include<stdlib.h>
#include<stdio.h>

#define cilk_spawn spawn _cilk_synctoken
#define cilk_sync sync _cilk_synctoken
#define cilk_for(x) for(x) cilk_spawn

void f(int n){
  cilk_for(int i=0; i<n; i++) {
    printf("%d\n",i); 
  }
  cilk_sync; 
}

int main(int argc, char** argv){
  f(atoi(argv[1]));
}



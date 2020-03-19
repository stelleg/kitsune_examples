#include<stdio.h>
#include<stdlib.h>
#include<cilk/cilk.h>
#include<stdatomic.h>

int main(int argc, char** argv){
  atomic_int acnt=0; 
  for(int i=0; i<atoi(argv[1]); i++) {
    cilk_spawn acnt++;  
  }
  cilk_sync; 
  printf("%d\n", acnt); 
}

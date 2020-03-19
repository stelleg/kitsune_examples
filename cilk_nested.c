#include<stdio.h>
#include<cilk/cilk.h>

int main(){
  cilk_spawn {
    printf("hello x1");
    cilk_spawn {
      printf("hello y");
    } 
    printf("hello x2"); 
    cilk_sync; 
  } 
  cilk_sync; 
}

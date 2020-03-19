#include<stdio.h>
#include<kitsune.h>

int main(){
  spawn x {
    printf("hello x1");
    spawn y {
      printf("hello y");
    } 
    printf("hello x2"); 
    sync y; 
  } 
  sync x; 
}

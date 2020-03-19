#include<kitsune.h>
#include<stdlib.h>
#include<stdio.h>

void f(int n){
  for(int i=0; i<n; i++) spawn x {
    printf("%d\n",i); 
  }
  sync x; 
}

int main(int argc, char** argv){
  f(atoi(argv[1]));
}



#include<stdio.h>
#include<stdbool.h>

int main(int ci, char** v){
  bool cond = ci%2; 
  int ax, bx, cx; 
  a: 
    ax = printf("a\n"); 
    if(cond) goto b; else goto c; 
  b: 
    bx = printf("b\n"); 
    if(cond) goto c; else goto d;  
  c: 
    cx = printf("c\n"); 
    if(cond) goto d; else goto b; 
  d: 
    printf("ax = %d, bx = %d, cx = %d\n", ax, bx, cx); 
}


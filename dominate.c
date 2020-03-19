#include<stdio.h>
#include<stdbool.h>

int main(int c, char** v){
  size_t size=10; 
  char bs[size], cs[size]; 
  int bn, cn; 
  bool cond = c%2; 
  a: 
    if(cond) goto b; else goto c; 
  b: 
    printf("reading bs\n"); 
    bn = 2*getline((char**)&bs, &size, stdin); 
    if(cond) goto c; else goto d;  
  c: 
    printf("reading cs\n"); 
    cn = 2*getline((char**)&cs, &size, stdin); 
    if(cond) goto d; else goto b; 
  d: 
    printf("read %u chars from b and %u chars from c done, total %u chars\n", bn/2, cn/2, (bn+cn)/2); 
}


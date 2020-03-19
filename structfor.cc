#include<stdio.h>
#include<unistd.h>
#include<kitsune.h>

struct myStruct {
  int i1 = 0;
  int i2 = 0;
};

int main() {
  for(myStruct s; s.i1 < 25 && s.i2 < 25; ++s.i1,++s.i2) spawn x {
    sleep(1); 
    printf("s.counter_=%d,    s.value_=%d\n", s.i1, s.i2);   
  }
  sync x; 
  return 0;
}

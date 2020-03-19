#include <stdio.h>

int main(){
  for(int i=0; i<10; i++){
    auto x = [i](){return i;};
    printf("%d\n", i);
  }
}



#include<stdlib.h>
#include<stdio.h>
#include<kitsune.h>
#include<vector>

using namespace std; 

void f(int n){
  vector<int> xs(n); 
  for(int i=0; i<n; i++) xs[i] = i; 
  forall(auto i : xs) {
    printf("%d\n", i);
  }
}

int main(int argc, char** argv){

  f(argc > 1 ? atoi(argv[1]) : 10);
}



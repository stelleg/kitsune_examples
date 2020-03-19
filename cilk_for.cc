#include<stdlib.h>
#include<stdio.h>
#include<cilk/cilk.h>
#include<iostream>

using namespace std; 

void f(int n){
  try {
    cilk_for(int i=0; i<n; i++) { 
      printf("%d\n", i);
      throw i; 
    }
  } catch(int e){
    cout << "An exception occurred : " << e << endl; 
  }
}

int main(int argc, char** argv){
  f(argc > 1 ? atoi(argv[1]) : 10);
}



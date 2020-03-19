#include<stdio.h>
#include<omp.h>

int main(int argc, char** argv){
  unsigned long long j =0; 
  for(int i=0; i<atoi(argv[1]); i++){
    #pragma omp task firstprivate(j)
    printf("i = %d from thread %d \n", i, omp_get_thread_num()); 
  }
}


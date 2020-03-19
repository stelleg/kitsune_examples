#include<vector>

void g(int a); 

void f(std::vector<int> as){
  for(auto &a : as) g(a); 
}

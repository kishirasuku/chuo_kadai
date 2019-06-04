#include<iostream>
#include<vector>

int main(){
  std::vector<double> reals = {0.1,0.2,0.3,0.4};
  
  for(double x:reals){
    std::cout << x << " ";
  }
  std::cout << "\n";
  
  return 0;
}

#include<iostream>
#include<vector>

int main(){
  std::vector<int> values = {10,20,30};
  //int sum1 = values[0] + values[1] + values[2];
  //std::cout << sum1 << "\n" ;
  std::cout << values.size() << "\n";
  
  values[0] += 40;
  //int sum2 = values[0] + values[1] + values[2];
  //std::cout << sum2 << "\n" ;
  values.push_back(40);
  std::cout << values[3] << "\n";
  std::cout << values.size() << "\n";
  return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>

bool compare(int a,int b){
  return a > b;
}

int main(){
  std::vector<int> items = {2,0,1,9};
  std::sort(items.begin(),items.end());
  
  for(auto x:items){
    std::cout << x << " ";
  }

  std::cout << "\n";

  std::sort(items.begin(),items.end(),compare);
  for(auto x:items){
    std::cout << x << " ";
  }

  std::cout << "\n";

  return 0;
}

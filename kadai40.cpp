//40 18D8104032K kishimoto kenta

#include<iostream>
#include<string>
#include<cstdlib>

int main(){
  std::string directory_names = std::getenv("PATH");
  int start = 0,end = 0;
  int size = directory_names.size();
  
  for(int i = 0;i < size;i++){
    if(directory_names[i] == ':'){
      std::cout << directory_names.substr(start,end) << "\n";
      start = i + 1;
      end = i + 1;
      i = i + 1;
      //std::cout << start << " "  << end << "\n";
    }else{
      end++;
      //std::cout << start << " " << end << "\n";
    }
  }
  return 0;
}

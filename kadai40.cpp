//40 18D8104032K kishimoto kenta

#include<iostream>
#include<string>
#include<cstdlib>

int main(){
  std::string directory_names = std::getenv("PATH");
  int start = 0,end = 1;
  int size = directory_names.size();
  int j = 1;
  for(int i = 0;i < size;i++){
    if(directory_names[i] == ':'){
      if(j == 1){
      std::cout << j << ")" << directory_names.substr(start,end-1) << "\n";
      }else{
	std::cout << j << ")" << directory_names.substr(start,end) << "\n";
      }
      start = i + 1;
      end = 0;
      //i = i + 1;
      j++;
      //std::cout << start << " "  << end << "\n";
    }else{
      end++;
      //std::cout << start << " " << end << "\n";
    }
  }
  std::cout << j << ")" << directory_names.substr(start,size-start) << "\n";
  return 0;
}

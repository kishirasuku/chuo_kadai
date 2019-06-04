#include<iostream>
#include<ctime>

int main(){
  std::time_t now =std::time(nullptr);
  std::tm* ptr_to_jpn_time = std::localtime(&now);
  
  int y= ptr_to_jpn_time->tm_year + 1900;
  int m= ptr_to_jpn_time->tm_mon + 1;
  int d=ptr_to_jpn_time->tm_mday;
  std::cout << y << "年" << m << "月" << d << "日\n" ;
  return 0;
}

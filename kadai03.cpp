//課題3 4/9 18D810402K 岸本健太
#include<iostream>

void check(int toshi){
  if(1868<=toshi && toshi<=1911){
    std::cout << "西暦" << toshi << "年は明治" << toshi-1868+1 << "年です\n";
  }else if(toshi == 1912){
    std::cout << "西暦" << toshi << "年は明治46年または大正1年です\n"; 
  }else if(1913<=toshi && toshi<=1925){
    std::cout << "西暦" << toshi << "年は大正" << toshi-1912+1 << "年です\n";
  }else if(toshi==1926){
    std::cout << "西暦" << toshi << "年は大正15年または昭和1年です\n"; 
  }else if(1927<=toshi && toshi<=1988){
    std::cout << "西暦" << toshi << "年は昭和" << toshi-1926+1 << "年です\n";
  }else if(toshi==1989){
    std::cout << "西暦" << toshi << "年は昭和64年または平成1年です\n"; 
  }else if(1990<=toshi && toshi<=2018){
    std::cout << "西暦" << toshi << "年は平成" << toshi-1989+1 << "年です\n";
  }else if(toshi==2019){
    std::cout << "西暦" << toshi << "年は平成31年または令和1年です\n";     
  }
}

int main(){
  int toshi;
  std::cout << "西暦を入力:";
  std::cin >> toshi;
  check(toshi);
  return 0;
}

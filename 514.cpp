#include<iostream>

void swap_by_val(int x,int y){
  int tmp=x;
  x=y;
  y=tmp;
}

void swap_by_ref(int& x,int& y){
  int tmp=x;
  x=y;
  y=tmp;
}

int main(void){
  int a=2,b=3;
  
  swap_by_val(a,b);
  std::cout << a << "," << b << '\n' ;

  swap_by_ref(a,b);
  std::cout << a << "," << b << '\n' ;

  return 0;
}

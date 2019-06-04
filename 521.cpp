#include<iostream>

void f(int x) {std::cout << "A" << '\n';}
void f(double x) {std::cout << "B" << '\n';}
void f() {std::cout << "C" << '\n';}


int main(){
  f(123);
  f(0.5);
  f();
  return 0;
}

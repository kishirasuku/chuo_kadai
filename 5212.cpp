#include<iostream>

struct Point{
  double x;
  double y;
};

std::istream& operator>>(std::istream& in,Point& p){
  in >> p.x >> p.y ;
  return in;
}

std::ostream& operator<<(std::ostream& out,Point p){
  out << "(" << p.x << "," << p.y << ")" ;
  return out;
}

int main(){
  Point a;
  std::cin >> a;
  std::cout << a << "\n";
  return 0;
}

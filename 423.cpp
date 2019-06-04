#include<iostream>

struct Point{
  double x;
  double y;
  void translate_point(double dx,double dy){
  this->x += dx;
  this->y += dy;
  }
};

int main(){
  Point p={1.5,-0.5};
  p.translate_point(0.5,0.5);
  std::cout << "(" << p.x <<"," << p.y << ")\n" ;
  return 0;
}

//18D8104032K 岸本健太

#include<iostream>

struct Point{
  double x;
  double y;
};

struct Circle{
  Point center;
  double radius;
};

int main(){
  Point p;
  p.x=1.5;
  p.y=-0.5;
  std::cout << "(" << p.x << "," << p.y << ")\n" ;

  Circle c;
  c.center.x=0.0;
  c.center.y=0.0;
  c.radius=1.0;
  std::cout << "中心:(" << c.center.x << "," << c.center.y << ")半径:" << c.radius << "\n" ;
  return 0;
}

//課題8 4/23 18D8104032K 岸本健太
#include<iostream>

struct Point{
  double x;
  double y;
  void translate_point(double dx,double dy){
  this->x += dx;
  this->y += dy;
  }
  void input(){
    std::cin >> this->x;
    std::cin >> this->y;
  }
};

Point centroid(Point a,Point b,Point c){
  Point ctr={(a.x+b.x+c.x)/3,(a.y+b.y+c.y)/3};
  return ctr;
}

int main(){
  Point p1,p2,p3,c;
  p1.input();
  p2.input();
  p3.input();
  c=centroid(p1,p2,p3);
  std::cout << "重心:(" << c.x << "," << c.y << ")\n";
  return 0;
}

/*実行結果
重心:(2,2)
 */

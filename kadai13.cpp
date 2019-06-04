//課題13 5/7 18D8104032K 岸本健太

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

double squared_distance(Point p,Point q){
  return (p.x+q.x)*(p.x+q.x)+(p.y+q.y)*(p.y+q.y);
}

struct Circle{
  Point center;
  double radius;

  void input(){
    std::cin >> this->center.x;
    std::cin >> this->center.y;
    std::cin >> this->radius;
  }

  bool intersects(Circle other){
    double left = (this->radius - other.radius)*(this->radius - other.radius);
    double right = (this->radius + other.radius)*(this->radius + other.radius);
    if(left <= squared_distance(this->center,other.center) && squared_distance(this->center,other.center) <= right ){
      return true;
    }else{
      return false;
    }
  }
};



int main(){
  Circle c1,c2;
  c1.input();
  c2.input();
  if(c1.intersects(c2)){
    std::cout << "交差している\n";
  }else{
    std::cout << "交差していない\n";
  }
  return 0;
}

/*実行結果
0 0 3
4 0 3
交差している
 */

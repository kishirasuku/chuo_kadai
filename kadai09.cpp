//課題9 4/23 18D8104032K 岸本健太
#include<iostream>
#include<cmath>

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

double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}

struct Circle{
  Point po;
  double radius;
  
  bool contains(Point p){
    if(distance(p,this->po)<= this->radius){
      return true;
	}else{
      return false;
    }
  }
};



int main(){
  Point p;
  std::cin >> p.x;
  std::cin >> p.y;
  Circle c;
  std::cin >> c.po.x;
  std::cin >> c.po.y;
  std::cin >> c.radius;
  if(c.contains(p)){
    std::cout << "含まれる\n";
  }else{
    std::cout << "含まれない\n";
  }
  return 0;
}

/*実行結果
5
5
0
0
7
含まれない

5
5
0
0
8
含まれる

 */

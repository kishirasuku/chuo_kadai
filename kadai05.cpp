//課題5 4/16 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct Point{
  double x;
  double y;
};

double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}

struct Circle{
  Point po;
  double radius;
};

int main(){
  Point p;
  Circle c;
  std::cin >> p.x;
  std::cin >> p.y;
  std::cin >> c.po.x;
  std::cin >> c.po.y;
  std::cin >> c.radius;
  if(distance(p,c.po) <= c.radius){
    std::cout << "含まれる\n";
  }else{
    std::cout << "含まれない\n";
  }
  return 0;
}

/*実行結果
0
1
0
0
1
含まれる

5
5
0
0
1
含まれない

 */

//課題6 4/16 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct Point{
  double x;
  double y;
};

double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}

/*
struct Circle{
  Point po;
  double radius;
};
*/

struct Rectangle{
  Point lower_left_corner;
  Point upper_right_corner;
};

int main(){
  Point p;
  Rectangle r;
  std::cin >> p.x;
  std::cin >> p.y;
  std::cin >> r.lower_left_corner.x;
  std::cin >> r.lower_left_corner.y;
  std::cin >> r.upper_right_corner.x;
  std::cin >> r.upper_right_corner.y;
  if(r.lower_left_corner.x <= p.x && p.x <= r.upper_right_corner.x){
    if(r.lower_left_corner.y <= p.y && p.y <= r.upper_right_corner.y){
      std::cout << "含まれる\n";
    }else{
      std::cout << "含まれない\n";
    }
  }else{
    std::cout << "含まれない\n";
  }
  return 0;
}

/*実行結果
0
0
-3
-3
3
3
含まれる

-5
-5
-3
-3
3
3
含まれない

 */

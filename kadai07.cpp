//課題7 4/16 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct Point{
  double x;
  double y;
};

/*
double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}
*/

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

bool hantei(Point p,Rectangle r){
  if(r.lower_left_corner.x <= p.x && p.x <= r.upper_right_corner.x){
    if(r.lower_left_corner.y <= p.y && p.y <= r.upper_right_corner.y){
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }

}

bool check(Rectangle r1,Rectangle r2){
  Point hidariue = {r1.lower_left_corner.x,r1.upper_right_corner.y};
  Point migishita = {r1.upper_right_corner.x,r1.lower_left_corner.y};
  if(hantei(r1.lower_left_corner,r2)){
    return true;
  }
  if(hantei(r1.upper_right_corner,r2)){
    return true;
  }
  if(hantei(hidariue,r2)){
    return true;
  }
  if(hantei(migishita,r2)){
    return true;
  }
  return false;
}
int main(){
  Rectangle r1;
  Rectangle r2;
  std::cin >> r1.lower_left_corner.x;
  std::cin >> r1.lower_left_corner.y;
  std::cin >> r1.upper_right_corner.x;
  std::cin >> r1.upper_right_corner.y;
  std::cin >> r2.lower_left_corner.x;
  std::cin >> r2.lower_left_corner.y;
  std::cin >> r2.upper_right_corner.x;
  std::cin >> r2.upper_right_corner.y;
  if(check(r1,r2)){
    std::cout << "含まれる\n" ;
  }else{
    std::cout << "含まれない\n" ;
  }
  return 0;
}

/*実行結果
-1
-1
1
1
-2
-2
2
2
含まれる


 */

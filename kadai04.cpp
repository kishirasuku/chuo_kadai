//課題4 4/16 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct Point{
  double x;
  double y;
};

double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}

int main(){
  Point p;
  Point q;
  std::cin >> p.x;
  std::cin >> p.y;
  std::cin >> q.x;
  std::cin >> q.y;
  std::cout << distance(p,q) << "\n";
  return 0;
}

/*実行結果
1
1
2
2
1.41421
 */

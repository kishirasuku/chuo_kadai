#include<iostream>
#include<vector>

struct Point{
  double x,y;
};

int main(){
  std::vector<Point> points = {{0.0,0.0},{1.0,1.0}};
  points.pop_back();
  Point p = {1.0,0.0};
  points.push_back(p);
  Point q = {0.0,1.0};
  points.push_back(q);

  for(Point p:points){
    std::cout << p.x << p.y << "\n";
  }
  
  return 0;
}

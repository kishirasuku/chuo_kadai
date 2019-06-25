//36 6/25 18D8104032K Kishimoto Kenta

#include<iostream>
#include<vector>
#include<algorithm>

struct Point{
  double x,y;
};

bool compare_x(Point pt_a,Point pt_b){
  return pt_a.x < pt_b.x;
}

bool compare_y(Point pt_a,Point pt_b){
  return pt_a.y < pt_b.y;
}

bool compare_x2(Point pt_a,Point pt_b){
  return pt_a.x > pt_b.x;
}

bool compare_y2(Point pt_a,Point pt_b){
  return pt_a.y > pt_b.y;
}

void bounding_rectangle(std::vector<Point>& points,Point& min_pt,Point& max_pt){
  auto it = std::min_element(points.begin(),points.end(),compare_x);
  min_pt.x = (*it).x;
  it = std::min_element(points.begin(),points.end(),compare_y);
  min_pt.y = (*it).y;

  it = std::min_element(points.begin(),points.end(),compare_x2);
  max_pt.x = (*it).x;
  it = std::min_element(points.begin(),points.end(),compare_y2);
  max_pt.y = (*it).y;
}

int main(){
  int num_point;
  std::cout << "num_point:";
  std::cin >> num_point;

  std::vector<Point> points;
  for(int i = 0;i < num_point;i++){
    Point p;
    std::cout << "(x,y):";
    std::cin >> p.x >> p.y;
    points.push_back(p);
  }

  Point min_pt,max_pt;
  bounding_rectangle(points,min_pt,max_pt);

  std::cout << "left_down(" << min_pt.x << "," << min_pt.y << ")\n";
  std::cout << "right_upper(" << max_pt.x << "," << max_pt.y << ")\n";

  return 0;
}

/*result
num_point:5
(x,y):1 9
(x,y):7 3
(x,y):0 4
(x,y):7 5
(x,y):1 5
left_down(0,3)
right_upper(7,9)
 */

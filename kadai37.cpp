//37 6/25 18D8104032K Kishimoto Kenta

#include<iostream>
#include<vector>
#include<algorithm>

struct Point{
  double x,y;
};

struct Circle{
  Point center;
  double radius;
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

/*void bounding_rectangle(std::vector<Point>& points,Point& min_pt,Point& max_pt){
  auto it = std::min_element(points.begin(),points.end(),compare_x);
  min_pt.x = (*it).x;
  it = std::min_element(points.begin(),points.end(),compare_y);
  min_pt.y = (*it).y;

  it = std::min_element(points.begin(),points.end(),compare_x2);
  max_pt.x = (*it).x;
  it = std::min_element(points.begin(),points.end(),compare_y2);
  max_pt.y = (*it).y;
}
*/

bool compare_x_min(Circle circ_a,Circle circ_b){
  return (circ_a.center.x - circ_a.radius) < (circ_b.center.x - circ_b.radius);
}

bool compare_y_min(Circle circ_a,Circle circ_b){
  return (circ_a.center.y - circ_a.radius) < (circ_b.center.y - circ_b.radius);
}

bool compare_x_max(Circle circ_a,Circle circ_b){
  return (circ_a.center.x + circ_a.radius) > (circ_b.center.x + circ_b.radius);
}

bool compare_y_max(Circle circ_a,Circle circ_b){
  return (circ_a.center.y + circ_a.radius) > (circ_b.center.y + circ_b.radius);
}

void bounding_rectangle(std::vector<Circle> circles,Point& min_pt,Point& max_pt){
  auto it = std::min_element(circles.begin(),circles.end(),compare_x_min);
  min_pt.x = (*it).center.x - (*it).radius;

  it = std::min_element(circles.begin(),circles.end(),compare_y_min);
  min_pt.y = (*it).center.y - (*it).radius;

  it = std::min_element(circles.begin(),circles.end(),compare_x_max);
  max_pt.x = (*it).center.x + (*it).radius;

  it = std::min_element(circles.begin(),circles.end(),compare_y_max);
  max_pt.y = (*it).center.y + (*it).radius;
}

int main(){
  int num_circle;
  std::cout << "num_circle:";
  std::cin >> num_circle;

  std::vector<Circle> circles;
  for(int i = 0;i < num_circle;i++){
    Circle c;
    std::cout << "center:";
    std::cin >> c.center.x >> c.center.y;
    std::cout << "radius:";
    std::cin >> c.radius;
    
    circles.push_back(c);
  }

  Point min_pt,max_pt;
  bounding_rectangle(circles,min_pt,max_pt);

  std::cout << "left_down(" << min_pt.x << "," << min_pt.y << ")\n";
  std::cout << "right_upper(" << max_pt.x << "," << max_pt.y << ")\n";

  return 0;
}

/*result
num_circle:2
center:2 2
radius:2
center:4 4
radius:2
left_down(0,0)
right_upper(6,6)
 */


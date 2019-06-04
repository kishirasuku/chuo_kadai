#include<iostream>
#include<vector>

struct Point{
  double x,y;
};

std::istream& operator>>(std::istream& in,Point& p){
  in >> p.x >> p.y;
  return in;
}

std::ostream& operator<<(std::ostream& out,Point& p){
  out << "(" << p.x << "," << p.y << ")";
  return out;
}


int main(){
  int n;
  std::cin >> n;
  std::vector<Point> points;
  points.resize(n);
  
  for(Point& p:points){
    std::cin >> p;
  }

  Point upper_right=points[0],down_left=points[0];
  
  for(Point& p:points){
    if(p.x < down_left.x){
       down_left.x = p.x;
       //std::cout << down_left.x;
    }
    if(p.x > upper_right.x){
      upper_right.x = p.x;
      //std::cout << upper_right.x;
    }

    if(p.y < down_left.x){
      down_left.y = p.y;
      //std::cout << down_left.y;
    }
    if(p.y > upper_right.y){
      upper_right.y = p.y;
      //std::cout << upper_right.y;
    }
  }

  std::cout << "down_left:" << down_left << " upper_right: " << upper_right << "\n";

  return 0;
}

/*
2
1 7
2 8
down_left:(1,7) upper_right: (2,8)
 */

//kadai26 6/4 18D8104032K kishimoto kenta

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

double signed_area(std::vector<Point>& p){
  double sum = 0;
  int size = p.size();
  
  for(int i=0;i<size-1;i++){
    sum += ((p[i].x*p[i+1].y-p[i].y*p[i+1].x)/2);
  }

  return sum;
}

int main(){
  int n;
  std::cin >> n;
  std::vector<Point> points;
  points.resize(n);

  for(Point& p:points){
    std::cin >> p;
  }

  if(signed_area(points) >= 0){
    std::cout << "hantokeimawari\n";
  }else{
    std::cout << "tokeimawari\n";
  }
  
  return 0;
}

/*
3
0 0
-3 -5
3 -5
hantokeimawari

3
0 0
3 -5
-3 -5
tokeimawari
 */

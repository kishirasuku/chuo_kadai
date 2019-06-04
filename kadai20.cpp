//課題19 5/21 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct PointOnEarth{
  double lat,lon;
};

std::istream& operator>>(std::istream& in,PointOnEarth& p){
  in >> p.lat >> p.lon;
  return in;
}

double deg_to_rad(double deg){
  return deg*std::acos(-1.0)/180;
}

double distance(PointOnEarth a,PointOnEarth b){
  double g = std::sin(deg_to_rad((a.lat-b.lat))/2)*std::sin(deg_to_rad((a.lat-b.lat))/2);
  double h = std::cos(deg_to_rad(a.lat))*std::cos(deg_to_rad(b.lat))*std::sin(deg_to_rad((a.lon-b.lon))/2)*std::sin(deg_to_rad((a.lon-b.lon))/2);
  double r = 20000/std::acos(-1.0);
  double dis = 2*r*asin(std::sqrt(g+h));
  return dis;
}



int main(){
  PointOnEarth a,b;
  std::cin >> a >> b ;
  std::cout << distance(a,b) << "\n";
  return 0;
}

/*result
35.68944 139.69167
34.68639 135.52000
394.835
 */

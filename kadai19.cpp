//課題19 5/21 18D8104032K 岸本健太

#include<iostream>
#include<cmath>

struct Point3{
  double x,y,z;
};

std::istream& operator>>(std::istream& in,Point3& p){
  in >> p.x >> p.y >> p.z ;
  return in;
}

double kyori(Point3 a,Point3 b){
  return double(std::sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z)));
}

double triangle_area(Point3 a,Point3 b,Point3 c){
  double helon = (kyori(a,b)+kyori(b,c)+kyori(c,a))*(-kyori(a,b)+kyori(b,c)+kyori(c,a))*(kyori(a,b)-kyori(b,c)+kyori(c,a))*(kyori(a,b)+kyori(b,c)-kyori(c,a));
  return double(std::sqrt(helon)/4);
}

int main(){
  Point3 a,b,c;
  std::cin >> a >> b >> c;
  std::cout << triangle_area(a,b,c) << "\n" ;
  return 0;
}

/*result
0 2 1
3 5 2
1 4 3
3.53553
 */

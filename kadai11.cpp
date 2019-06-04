//課題9 4/23 18D8104032K 岸本健太
#include<iostream>
#include<cmath>

struct Point{
  double x;
  double y;
  void translate_point(double dx,double dy){
  this->x += dx;
  this->y += dy;
  }
  void input(){
    std::cin >> this->x;
    std::cin >> this->y;
  }
};

Point centroid(Point a,Point b,Point c){
  Point ctr={(a.x+b.x+c.x)/3,(a.y+b.y+c.y)/3};
  return ctr;
}

double distance(Point p,Point q){
  return std::sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}

struct Circle{
  Point po;
  double radius;
  
  bool contains(Point p){
    if(distance(p,this->po)<= this->radius){
      return true;
	}else{
      return false;
    }
  }
};

struct Rectangle{
  Point lower_left_corner;
  Point upper_right_corner;
};

bool is_point_rec_cross(Point p,Rectangle r){
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

double zettaichi(double a){
  if(a<0){
    return -a;
  }else{
    return a;
  }
}

/*bool tate_cross(Circle c,Rectangle r){
  if(r.lower_left_corner.y <= c.po.y && c.po.y <=r.upper_right_corner){
    if(zettaichi(p.x-r.lower_left_corner.x) <= c.radius || zettaichi(p.x-r.upper_right_corner.x) <= c.radius ){
      return true;
    }else{
      return false;
    }
  }else{
    if(distance(c.po,))
  }
}
*/

int main(){
  Cirlce c;
  std::cin >> c.po.x;
  std::cin >> c.po.y;
  std::cin >> c.radius;
  Rectangle r;
  std::cin >> r.lower_left_corner;
  std::cin >> r.upper_right_corner;
  Rectangle r2={}
  if(is_point_rec_cross(c.po,r)){
    std::cout << "含まれる" ;
  }else{
    std::cout << "含まれない" ;
  }
}

/*実行結果

*/

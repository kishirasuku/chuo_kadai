//課題12 5/7 18D8104032K 岸本健太

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

struct Triangle{
  Point a,b,c;
  
  void input(){
    std::cin >> this->a.x;
    std::cin >> this->a.y;
    std::cin >> this->b.x;
    std::cin >> this->b.y;
    std::cin >> this->c.x;
    std::cin >> this->c.y;
  }

  double area(){
    return std::fabs(((this->b.x-this->a.x)*(this->c.y-this->a.y)-(this->b.y-this->a.y)*(this->c.x-this->a.x))/2);
  }

};

int main(void){
  Triangle t;
  t.input();
  std::cout << "面積:" << t.area() << "\n";
  return 0;
}

/*実行結果
0 0
5 0
0 3
面積:7.5
 */

//課題14 5/7 18D8104032K 岸本健太

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

double distance(Point a,Point b){
  return std::fabs((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

struct Triangle{
  Point a,b,c;
  double l,m,s;
  
  void input(){
    std::cin >> this->a.x;
    std::cin >> this->a.y;
    std::cin >> this->b.x;
    std::cin >> this->b.y;
    std::cin >> this->c.x;
    std::cin >> this->c.y;
    l=distance(a,b);
    m=distance(b,c);
    s=distance(a,c);
  }

  void arrange(){
    if(this->l < this->m){
      double tmp= this->l;
      this->l = this->m;
      this->m=tmp;
    }
    if(this->l < this->s){
      double tmp= this->l;
      this->l = this->s;
      this->s = tmp;
    }
    if(this->m < this->s){
      double tmp=this->m;
      this->m = this->s;
      this->s = tmp;
    }
  }

  double area(){
    return std::fabs(((this->b.x-this->a.x)*(this->c.y-this->a.y)-(this->b.y-this->a.y)*(this->c.x-this->a.x))/2);
  }

  bool is_congruent_to(Triangle other){
    this->arrange();
    other.arrange();
    if(this->l == other.l && this->m == other.m && this->s == other.s){
      return true;
    }else{
      return false;
    }
  }
};

int main(void){
  Triangle t1,t2;
  t1.input();
  t2.input();
  t1.arrange();
  t2.arrange();
  //std::cout << t1.l << t1.m << t1.s;
  //std::cout << t2.l << t2.m << t2.s;
  if(t1.is_congruent_to(t2)){
    std::cout << "合同です\n";
  }else{
    std::cout << "合同ではありません\n";
  }
  return 0;
}

/*実行結果
0 0
2 0
0 2
1 0
3 0
1 2
合同です
 */

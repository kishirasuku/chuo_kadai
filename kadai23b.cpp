//課題23 5/28 18D8104032K 岸本健太

#include<iostream>
#include<vector>

struct GridPoint{
  int x,y;
};

std::istream& operator>>(std::istream& in,GridPoint& p){
  in >> p.x >> p.y;
  return in;
}

int double_signed_area(GridPoint a,GridPoint b,GridPoint c){
  return ((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x))/2;
}

void ret_xleft_xright(GridPoint a,GridPoint b,GridPoint c,int& xleft,int& xright){
  int max = abs(a.x-b.x);
  xleft = a.x;
  xright = b.x;
  if(abs(a.x-c.x) > max){
    max = abs(a.x-c.x);
    xleft = a.x;
    xright = c.x;
  }
  if(abs(b.x-c.x) > max){
    max = abs(b.x - c.x);
    xleft = b.x;
    xright = c.x;
  }
  
  if(xleft-xright < 0){
    int tmp = xleft;
    xleft = xright;
    xright = tmp;
  }
}

void ret_yup_ydown(GridPoint a,GridPoint b,GridPoint c,int& yup,int& ydown){
  int max = abs(a.y-b.y);
  yup = a.y;
  ydown = b.y;
  if(abs(a.y-c.y) > max){
    max = abs(a.y-c.y);
    yup = a.y;
    ydown = c.y;
  }
  if(abs(b.y-c.y) > max){
    max = abs(b.y - c.y);
    yup = b.y;
    ydown = c.y;
  }
  
  if(ydown - yup < 0){
    int tmp = yup;
    yup = ydown;
    ydown = tmp;
  }
}

bool check(GridPoint a,GridPoint b,GridPoint c,GridPoint p){
  bool b1,b2,b3;

  b1 = double_signed_area(p,a,b) < 0.0f;
  b2 = double_signed_area(p,c,b) < 0.0f;
  b3 = double_signed_area(p,a,c) < 0.0f;

  return ((b1 == b2) && (b2 == b3));
}

std::vector<GridPoint> enumerate_grid_points(GridPoint a,GridPoint b,GridPoint c){
  std::vector<GridPoint> values;
  int xleft,xright,ydown,yup;
  ret_xleft_xright(a,b,c,xright,xleft);
  ret_yup_ydown(a,b,c,ydown,yup);

  for(int y = ydown;y <= yup;y++){
    for(int x = xleft ; x <= xright; x++){
      GridPoint p = {x,y};
      if(check(a,b,c,p)){
	values.push_back(p);
      }
    }
  }
  return values;
}

int main(){
  GridPoint a,b,c;
  std::cin >> a >> b >> c;
  
  std::vector<GridPoint> result = enumerate_grid_points(a,b,c);
  
  for(GridPoint p:result){
    std::cout << "(" << p.x << "," << p.y << ")\n";
  }
  
  return 0;
}

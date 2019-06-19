#include<iostream>
#include<vector>

struct GridPoint{
  int x,y;
};

std::istream& operator>>(std::istream& in,GridPoint& p){
  in >> p.x >> p.y;
  return in;
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

bool check(GridPoint p,GridPoint a,GridPoint b,GridPoint c){
  int p0x = a.x,p0y = a.y,p1x = b.x,p1y = b.y,p2x = c.x,p2y = c.y,px = p.x,py=p.y;
  double Area = 0.5 *(-p1y*p2x + p0y*(-p1x + p2x) + p0x*(p1y - p2y) + p1x*p2y);
  double s = 1/(2*Area)*(p0y*p2x - p0x*p2y + (p2y - p0y)*px + (p0x - p2x)*py);
  double t = 1/(2*Area)*(p0x*p1y - p0y*p1x + (p0y - p1y)*px + (p1x - p0x)*py);
 
  if((0 <= s && s <= 1) && (0 <= t && t <= 1) && (0<=1-s-t && 1-s-t<=1)){
    return true; //Inside Triangle
  }else{
    return false;
  } 
}

std::vector<GridPoint> Point_inTriangle(GridPoint a,GridPoint b,GridPoint c){
  std::vector<GridPoint> values;
  int xleft,xright,ydown,yup;
  ret_xleft_xright(a,b,c,xright,xleft);
  ret_yup_ydown(a,b,c,ydown,yup);

  for(int y = ydown;y <= yup;y++){
    for(int x = xleft;x <= xright;x++){
      GridPoint p = {x,y};
      if(check(p,a,b,c)){
	values.push_back(p);
      }
    }
  }

  return values;
}

int main(){
  GridPoint a,b,c;
  std::cin >> a >> b >> c;

  std::vector<GridPoint> values = Point_inTriangle(a,b,c);

  for(GridPoint p:values){
    std::cout << "(" << p.x << "," << p.y << ")\n";
  }

  return 0;
}

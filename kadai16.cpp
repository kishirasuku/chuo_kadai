//課題16 5/14 18D8104032K 岸本健太

#include<iostream>

void sort(double& x1,double& x2,double& x3){
  if(x1 > x2){
    int tmp=x1;
    x1=x2;
    x2=tmp;
  }
  if(x2 > x3){
    int tmp=x2;
    x2=x3;
    x3=tmp;
  }
  if(x1 > x2){
    int tmp=x1;
    x1=x2;
    x2=tmp;
  }
}

int main(){
  double a,b,c;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  
  sort(a,b,c);

  std::cout << a << "," << b << "," << c << "\n" ;
  
  return 0;

}

/*実行結果
3 5 1
1,3,5

 */

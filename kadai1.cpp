//課題1 4/9 18D810402K 岸本健太

#include<iostream>

int gcd(int x,int y){
  if(y > x){
    int tmp=x;
    x=y;
    y=tmp;
  }
  int ans=0;
  for(int i=0;i<=y;i++){
    if(x%i){
      ans=i
    }
  }
  return ans;
}

int main(){
  int x,y;
  std::cin >> x;
  std::cin >> y;
  std::cout << gcd(x,y);
  return 0;
}

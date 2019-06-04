//課題1 4/9 18D810402K 岸本健太
#include<iostream>

int gcd(int x,int y){
  if(y>x){
    int tmp=y;
    y=x;
    x=y;
  }
  int ans=0;
  for(int i=1;i<=y;i++){
    if(y%i==0){
      if(x%i==0){
	ans=i;
      }
    }
  }
  return ans;
}

int main(){
  int x,y;
  std::cin >> x;
  std::cin >> y;
  std::cout << gcd(x,y)<<'\n';
  return 0;
}

/*実行結果
10
2
2

 */

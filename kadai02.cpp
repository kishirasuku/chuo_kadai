//課題2 4/9 18D810402K 岸本健太
#include<iostream>

bool is_prime(int x){
  int check;
  for(int i=1;i<x;i++){
    if(x%i==0){
      check=i;
    }
  }
  if(check==1){
    return true;
  }else{
    return false;
  }
}

int main(){
  int num;
  std::cin >> num;
  if(is_prime(num)){
    std::cout << "numは素数\n";
  }else{
    std::cout << "numは素数ではない\n";
  }
  return 0;
}

/*実行結果
11
numは素数
8
numは素数ではない

 */

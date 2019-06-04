//27 6/4 18D8104032K kishimoto kenta

#include<iostream>

bool sosu_hantei(long long n){
  long long sum = 0;
  for(long long i=1;i < n;i++){
    if(n / i % == 0){
      sum++;
    }
  }

  if(sums == 1){
    return true;
  }else{
    return false;
  }
}

int main(){
  long long n;
  std::cin >> n;
  
  std::vector<bool> result;
  result.resize(n*n);
  
  for(long long i = 0;i <= (n+1)*(n+1),i++){
    if(sosu_hantei(i)){
      result.push_back(true);
    }else{
      result[i].push_back(false);
    }

    if(i == n*n){
      
    }
  }
}

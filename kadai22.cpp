//課題22 5/28 18D8104032K 岸本健太

#include<iostream>
#include<vector>
#include<utility>

void reverse(std::vector<double>& values){
  int n = values.size();
  for(int i=0;i < n/2;i++){
    std::swap(values[i],values[n-1-i]);
  }
}

int main(){
  int n;
  std::cin >> n;
  std::vector<double> values;

  for(int i=0;i<n;i++){
    int x;
    std::cin >> x;
    values.push_back(x);
  }

  reverse(values);
  
  for(int i=0;i<n;i++){
    std::cout << "values[" << i << "]:" << values[i] << "\n";
  }

  return 0;
}

/*実行結果
6
1 2 3 4 5 6
values[0]:6
values[1]:5
values[2]:4
values[3]:3
values[4]:2
values[5]:1
 */

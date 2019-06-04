//課題17 5/14 18D8104032K 岸本健太

#include<iostream>
#include<utility>

void insertion_sort(int values[],int n){
  if(n!=0) std::cin >> values[0];
  for(int i=1;i<n;i++){
    std::cin >> values[i];
    
    for(int j=i;j>=0;j--){
      if(values[j] < values[j-1]){
	std::swap(values[j],values[j-1]);
	  }else{
	break;
      }
    }
  }
}

int main(){
  int n;
  std::cout << "要素数:" ;
  std::cin >> n;
  int values[n];
  
  insertion_sort(values,n);

  for(int i=0;i<n;i++){
    std::cout << "values[" << i << "]:" << values[i] << "\n" ;
  }

  return 0;
}

/*実行結果
要素数:4
3 2 6 1
values[0]:1
values[1]:2
values[2]:3
values[3]:6
 */

//39 7/2 18D8104032K kishimoto kenta

#include<iostream>
#include<vector>
#include<algorithm>

struct Rational{
  int numer,denom;
};

bool operator<(Rational rat1,Rational rat2){
  double r1_size = (double)rat1.numer/rat1.denom;
  double r2_size = (double)rat2.numer/rat2.denom;

  if(r1_size < r2_size){
    return true;
  }else{
    return false;
  }
}

std::ostream& operator<<(std::ostream& output,Rational rat){
  output << rat.numer << "/" << rat.denom;
  return output;
}

int main(){
  int n;
  std::cin >> n;
  
  std::vector<Rational> rat;
  for(int i = 0;i < n;i++){
    Rational r;

    std::cout << "numer denom:";
    std::cin >> r.numer >> r.denom;
    
    rat.push_back(r);
  }

  std::sort(rat.begin(),rat.end());
  for(Rational r:rat){
    std::cout << r << "\n";
  }
}

/*result
3
numer denom:1 3
numer denom:1 5
numer denom:1 2
1/5
1/3
1/2
*/

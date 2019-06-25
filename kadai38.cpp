//38 18D8104032K kishimoto kenta

#include<iostream>
#include<string>
#include<random>
#include<vector>
#include<algorithm>

int main(int argc,char* argv[]){
  if(argc != 2){
    std::cout << argv[0] << " $RANDOM\n";
    std::exit(1);
  }

  int n;
  std::cin >> n;

  std::mt19937 random;
  int seed_val = std::atoi(argv[1]);
  random.seed(seed_val);

  std::vector<double> values;
  values.resize(n);

  for(double& x:values){
    x = random() / (random.max() + 1.0);
  }

  std::sort(values.begin(),values.end());

  std::vector<double> member;
  member.push_back(values[0]);
  
  for(double x:values){
    int size = member.size();
    if(x != member[size-1]){
      member.push_back(x);
    }
  }

  int num_member = member.size();

  std::cout << double(n - num_member)/double(n) << "\n";

  return 0;
}

/*result
50939406
0.00592557
 */

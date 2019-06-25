//31 18D8104032K 岸本健太

#include<iostream>
#include<string>
#include<random>

int main(int argc,char* argv[]){
  if(argc != 5){
    std::cout << "./kadai31 乱数の個数 乱数の最小値 乱数の最大値 乱数の種\n";
    std::exit(1);
  }
  
  int r_num = std::atoi(argv[1]);
  double r_min = std::atof(argv[2]);
  double r_max = std::atof(argv[3]);

  std::mt19937 random;
  int seed_val = std::atoi(argv[4]);
  random.seed(seed_val);

  
  for(int i = 0;i < r_num;i++){
  double r01 = random() / (random.max() + 1.0);
  double rnd = r_min + (r_max - r_min) * r01;

  std::cout << rnd << "\n";
  }
  
  return 0;
}

/*result
./kadai31 5 0 100 $RANDOM
51.048
98.2507
92.895
8.08662
30.2337
x
 */

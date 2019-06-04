//課題10 4/23 18D8104032K 岸本健太
#include<iostream>

struct Era{
  char name[20];
  int start_year;
  int end_year;

  bool contains(int y){
    if(start_year <= y && y <= end_year){
      return true;
    }else{
      return false;
    }
  }

  int western_to_japanese(int y){
    return y-start_year+1;
  }
};

int main(){
  Era eras[5]{
    {"明治",1868,1912},
      {"大正",1912,1926},
	{"昭和",1926,1989},
	  {"平成",1989,2019},
	    {"令和",2019,9999}
  };
  int year;
  std::cin >> year;
  for(int i=0;i<5;i++){
    if(eras[i].contains(year)){
      std::cout << "西暦" << year << "年は" << eras[i].name << eras[i].western_to_japanese(year) << "年です\n" ;
    }
  }
}

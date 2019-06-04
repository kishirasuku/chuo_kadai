//課題18 5/14 18D8104032K 岸本健太

#include<iostream>

bool is_leap_year(int y){
  if(y%4 == 0 && ( y%100 !=0 || y%400 == 0)){
    return true;
  }else{
    return false;
  }
}

int num_days_in_month(int y,int m){
  if(m == 1){
    return 31;
  }else if(m == 2){
    if(is_leap_year(y)){
      return 29;
    }else{
      return 28;
    }
  }else if(m == 3){
    return 31;
  }else if(m == 4){
    return 30;
  }else if(m == 5){
    return 31;
  }else if(m == 6){
    return 30;
  }else if(m == 7){
    return 31;
  }else if(m == 8){
    return 31;
  }else if(m == 9){
    return 30;
  }else if(m == 10){
    return 31;
  }else if(m == 11){
    return 30;
  }else{
    return 31;
  }
}

struct Date{
  int year,month,day;
  
  void input(){
    std::cin >> year;
    std::cin >> month;
    std::cin >> day;
  }

  void print(){
    std::cout << year << "年" << month << "月" << day << "日\n" ;
  }

  void advance(int n){
    for(int i=0;i<n;i++){
      if(day+1 > num_days_in_month(year,month)){
	day = 1;
	if(month == 12){
	  month = 1;
	  year++;
	}else{
	  month++;
	}
      }else{
	day++;
      }
    }
  }
};

int main(){
  Date d;
  d.input();
  d.print();
  
  int n;
  std::cout << "進める日数:";
  std::cin >> n;

  d.advance(n);
  d.print();

  return 0;
}

/*実行結果

2021
2 28
2021年2月28日
進める日数:2
2021年3月2日

2020
2 28
2020年2月28日
進める日数:1
2020年2月29日

*/

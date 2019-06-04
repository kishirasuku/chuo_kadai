//課題19 5/21 18D8104032K 岸本健太

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

struct DateTime{
  int year,month,day,hour,minute,second;
  
  void advance(int seconds){
    for(int i=0;i<seconds;i++){
      if(second==59){
	second=0;
	if(minute==59){
	  minute=0;
	  if(hour==23){
	    hour=0;
	    if(day+1 > num_days_in_month(year,month)){
	      day =1;
	      if(month==12){
		month=1;
		year++;
	      }else{
		month++;
	      }
	    }else{
	      day++;
	    }
	  }else{
	    hour++;
	  }
	}else{
	  minute++;
	}
      }else{
	second++;
      }
    }
  }
};

DateTime unixtime_to_datetime(int ut){
  DateTime dt = {1970,1,1,9,0,0};
  dt.advance(ut);
  return dt;
}

std::ostream& operator<<(std::ostream& out,DateTime dt){
  out << dt.year << "nenn" << dt.month << "gatsu" << dt.day << "nichi" << dt.hour << "ji" << dt.minute << "hunn" << dt.second << "byou\n" ;
  return out;
}

int main(){
  int ut;
  std::cin >> ut;
  std::cout << unixtime_to_datetime(ut);
  return 0;
}

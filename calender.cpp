#include <iostream>
#include <stdlib.h>

using namespace std;

  class calender{
	  public:
	  	void date(){
			system("Color 1f");//changing the color of the consule
	  		int year,month,day,daysInMonth,i,weekDay;
	  		weekDay=0;
			  cout <<"Enter the year: ";
			  cin >> year;
	  		char *months[]={// creating a pointer of an array
				  "January",
				  "February",
				  "March",
				  "April",
				  "May",
				  "June",
				  "July",
				  "August",
				  "September",
				  "October",
				  "November",
				  "December"
			  };
			  int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
			  
			  if((year%4 == 0 && year%100 != 0) || year%400 == 0){
				  monthDays[1]=29;
			  }
			  	  cout <<"                       				   "<<year <<" Calender";
			  for(i = 0; i <= 12; i++){
			  	
			  	daysInMonth=monthDays[i];
			  	
				   cout <<"\n\n	--------------------------------------------- " << months[i] <<" ----------------------------------------------------\n\n" ;
				   cout <<"		Sun		Mon		Tue		Wed		Thurs		Fri		Sat \n";
				   
				   for(day=1; day <= daysInMonth; day++){
					   cout<<"		" <<day;
					   
					   if(++weekDay > 6){
					   	cout<<endl;
						   weekDay=0;
					   }
				   }
				   
			  }
			  
			  
		  }
	  
  };



int main(){
	calender get;
	get.date();

	return 0;
}
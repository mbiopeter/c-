#include <iostream>
#include <stdlib.h>
using namespace std;

class greades{
	public:
		void marks(){
			system("Color 1f");
			int marks;
			int grade;
			cout << "Enter the marks: ";
			cin >> marks;
			grade = marks/10;
			switch(grade){
			case 9:
				cout <<"Your grade is A.";
				break;
			case 8:
				cout <<"Your grade is A.";	
				break;
			case 7:
				cout <<"Your grade is A.";	
				break;			
			case 6:
				cout <<"Your grade is B.";	
				break;			
			case 5:
				cout <<"Your grade is C.";	
				break;						
			case 4:
				cout <<"Your grade is D.";	
				break;
			case 3:
				cout <<"Your grade is E.";	
				break;			
			case 2:
				cout <<"Your grade is E.";	
				break;			
			case 1:
				cout <<"Your grade is E.";	
				break;	
			case 0:
				cout <<"Your grade is E.";	
				break;	
			default:
				cout <<"Inavalid grades.";	
			}			
		}
	
};


int main(){
greades get;
	get.marks();
	return 0;
}
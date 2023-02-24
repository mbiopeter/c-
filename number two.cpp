#include <iostream>
#include <string.h>

using namespace std;

class person{
		
		
	   private:
		int age;
		string firstname;
		string lastname;  
	   public:
	   	void setvalues(int personAge,string personfirstname,string personlastname){
			 age =  personAge; 
			firstname = personfirstname;
			lastname =  personlastname;
		   }
	   	void getvalues(){
			   cout <<"age: " <<age <<endl;
			   cout <<"firstname: " <<firstname <<endl;
			   cout <<"lastname: " <<lastname << endl;
		   }
		   
	person(){
	age = 22;
	firstname = "peter";
	lastname = "mbio";	
		
	}
	
};

int main(){
	 person get;
	 get.getvalues();
	return 0;
}
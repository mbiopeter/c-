#include <iostream>

using namespace std;

/*class person{
		
		
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
*/


class student : Public person {
	public:
		string institution;
		string year_of_study;
		string registration_number;
	
};

int main(){
	
	return 0;
}
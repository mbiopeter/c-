#include <iostream>
#include <stdlib.h>

using namespace std;

class cars{
private:
	
	string company_name;
	string model_name;
	string fuel_type;
	float milage;
	double price;
	
public:
		//default constructor
		cars(){
			
	   	   	company_name = "Toyota";
			model_name = "Harrier";
			fuel_type = "petrol";
			milage = 12.3;
			price = 34000;		
		}
		//parametrized constructor
		cars(string company,string mname,string ftype,float m,double p){
			company_name = company;
			model_name = mname;
			fuel_type = ftype;
			milage = m;
			price = p;					
		}
		
		
			 void displayData(){
			 	system("Color 1f");
			cout << "Car propeties " << endl;
			cout << "Car company name: " << company_name << endl;
			cout << "Car model: " << model_name << endl;
			cout << "Car fuel type: " << fuel_type << endl;
			cout << "Car milage: " << milage << endl;
			cout << "Car price: " << price << endl;
			cout<<endl;		
			cout<<endl;	
			cout<<endl;
		}
		//copy constructors
		cars(cars &obj){
			company_name = obj.company_name;
			model_name = obj.model_name;
			fuel_type = obj.fuel_type;
			milage = obj.milage;
			price = obj.price;	
		}
		
		//descructor
		~cars(){
			cout <<"Program terminated sucessfully."<< endl;
		}
	
};

int main(){
	cars car1,car2("Toyota","Lexus","petrol",19.9,290000),car3;//setting data using a construtor

	car1.displayData();
	car2.displayData();
	car3.displayData();
	
}